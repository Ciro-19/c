#ifndef INCLUDES_H
#   define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//void my_putnbr(int nb);=)
// void my_putchar(char c);
void my_putstr(char *str);
// int my_strlen(char *str);
int my_atoi(char *str);

#define VRAIS 1
#define FAUX 0

typedef int BOOLEAN;

typedef struct mystruct{
    int minutes;
    int hours;
}   type_struct;

typedef struct my_list {
    int nbr;
    struct mylst *next;
}   type_lst;

#endif
