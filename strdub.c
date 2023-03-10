#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int count = 0;
    while(str[count] != '\0') {
	count++;
    }
    return(count);
}
char my_strdup(const char *src){
    int length;
    char *ret;

    length = my_strlen(src);
    ret = (char *)malloc(sizeof(char) * len_src);
    if (ret == NULL)
        return NULL;

    len_src = 0;
    while(src[length]){
        ret[length] = src[length];
        length++;
    }

    return(ret);
}

int main(void){
    char *str ="Macron";
    char *dup;

    dup = my_strdup(str);
    printf("%s\n",dup);
}