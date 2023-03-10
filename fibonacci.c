#include <stdio.h>
#include <unistd.h>

int my_atoi(char *str){
    int x = 0;
    int ret = 0;
    int neg = 1;
    int nb;

    while (str[x]){
        if (str[x] >= 48 && str[x] <= 57)
            break;
        else if (str[x] == 43 || str[x] == 45)
            break;
        ++x;
    }
    if (str[x] == 43 || str[x] == 45){
        if (str[x] == 45)
            neg = -1;
        ++x;
    }
    while(str[x]){
        nb = str[x] - 48;
        ret = ret*10 + nb;
        ++x;
        printf("%i \n",ret);
    }
    return(ret*neg);

}

int main(void){
    int nb = my_atoi("-5000");
    printf("%i \n",nb);
    
} 