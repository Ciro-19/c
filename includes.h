#ifndef INCLUDES_H
#   define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putstr(char *str);
int my_atoi(char *str);

#define TRUE 1
#define FALSE 0

typedef struct my_list {
    int nbr;
    struct mylst *next;
}   type_lst;

#endif
