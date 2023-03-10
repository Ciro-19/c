#include "includes.h"

int main(void){
    /*
    1/ Trier array_int avec qsort, ou avec 
        un tri à bulle
    2/ Création de 5 'type_lst*' contenant
        un chiffre chacune
    3/ Chainer ses liste grâce au "next". La 
        première liste doit être la valeur la plus petite,
        la dernière 
    4/ Bonus si doublement chainer (avec un prev)
    5/ Bonus si bouclé, le dernier pointe ur le premier
        et inversement.
    */

    int array_int[5] = {5,6,4,2,1};
    int i = 0;

    type_lst *lst;
    type_lst *lst2;
    type_lst *lst3;
    type_lst *lst4;
    type_lst *lst5;

    lst = (type_lst *)malloc(sizeof(lst));
    lst2 = (type_lst *)malloc(sizeof(lst2));
    lst3 = (type_lst *)malloc(sizeof(lst3));
    lst4 = (type_lst *)malloc(sizeof(lst4));
    lst5 = (type_lst *)malloc(sizeof(lst5));
    
    while (i < 5){
        qsort(array_int, 5,sizeof(int), cmpfunc);
        printf("%i\n", array_int[i]);
        ++i;
    }

    lst->nbr = array_int[0];
    lst2->nbr = array_int[1];
    lst3->nbr = array_int[2];
    lst4->nbr = array_int[3];
    lst5->nbr = array_int[4];


    lst->next = lst2;
    lst2->next = lst3;
    lst3->next = lst4;
    lst4->next = lst5;
    lst5->next = NULL;

    while(lst){
        printf("le nbr = %i\n", lst->nbr);
        lst = lst->next;
    }

    struct tri_lst {
        int i;
        while 
    }

}