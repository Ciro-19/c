#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int gd_double_strlen(const char *s1, const char *s2){
    int i;
    int len;
    int j;

    i = 0;
    j = 0;

    while(s1[i])         
        i++;
    
    while(s2[j])
        j++;
    

    len = (i + j);

    return(len);
}

char *join_to_string(char const *s1, char const *s2){
    int length;
    int p;
    
    length = gd_double_strlen(s1, s2);
    char *ret = (char*)malloc(sizeof(char) * length+1);

    if (ret == NULL)
        return NULL;
    ret[length +1 ] = '\0';
    length = 0;
    while(s1[length]){
        ret[length] = s1[length];
        ++length;
    }
    p = 0;
    while(s2[p]){
        ret[length] = s2[p];
        ++p;
        ++length;
    }

    return(ret);
}

int main(void){
    char *s1 = "macron";
    char *s2 = "brigitte";
    char *dub;

    dub = join_to_string(s1, s2);
    printf("%s\n",dub);
    free(dub);

}