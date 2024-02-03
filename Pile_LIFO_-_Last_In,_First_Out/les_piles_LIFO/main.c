#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main(void)
{
    int a;
    int b;
    Stack pile = new_stack();

    if (is_empty_Stack(pile))
    {
        printf("la pile est vide.\n");
    }
    else
    {
        printf("la pile a des elements.\n");
    }


    printf("###################################################\n");

    printf("le top de la pile est : %d \n",top_stack(pile));

    printf("veuillez entrer la taille de la pile : ");
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        printf("element %d : ", i + 1);
        scanf("%d",&b);
        pile = push_element(pile, b);
    }

    if (is_empty_Stack(pile))
    {
        printf("la pile est vide.\n");
    }
    else
    {
        printf("la pile a des elements.\n");
    }

    printf("###################################################\n");

    print_stack(pile);
     
    printf("le top de la pile est : %d \n",top_stack(pile));
    printf("la longeur de la pile est : %d \n", stack_lenght(pile));

    printf("###################################################\n");

    printf("le tri de la pile par ordre croiss :\n ");
    print_stack(sort_stack(pile));


    printf("###################################################\n");

    pile = pop_stack(pile);

    print_stack(pile);
       
    printf("le top de la pile est : %d \n",top_stack(pile));
    printf("la longeur de la pile est : %d \n", stack_lenght(pile));


    printf("###################################################\n");

    printf("le tri de la pile par ordre croiss :\n ");
    print_stack(sort_stack(pile));

    printf("###################################################\n");

    pile = free_memory(pile);

    if (is_empty_Stack(pile))
    {
        printf("la pile est vide.\n");
    }
    else
    {
        printf("la pile a des elements.\n");
    }

    return 0;
}