#include <stdlib.h>
#include <stdio.h>
#include "pile.h"


/*------------------------------------------------------------------------------------*/

Stack new_stack(void)
{
    return NULL;
}

/*------------------------------------------------------------------------------------*/

bool is_empty_Stack(Stack st)
{
    if (st == NULL)
    {
        return true;
    }
    return false;
}

/*------------------------------------------------------------------------------------*/

Stack push_element(Stack st, int z)
{
    StackElement *element;
    element = malloc(sizeof(*element));

    if (element == NULL)
    {
        fprintf(stderr, "probleme de l'allocation dynamique \n");
        exit(EXIT_FAILURE);
    }
    element ->value = z;
    element -> next = st;

    return element;
}

/*------------------------------------------------------------------------------------*/

Stack free_memory(Stack st)
{
    while(!is_empty_Stack(st))
    {
        st = pop_stack(st);
    }
    return new_stack();
}

/*------------------------------------------------------------------------------------*/

void print_stack(Stack st)
{
    if (is_empty_Stack(st))
    {
        printf("Rien a afficher !!");
        return;
    }

    while (!is_empty_Stack(st))
    {
        printf("[%d] --->", st->value);
        st = st->next;
    }
     printf("fin\n");


}

/*------------------------------------------------------------------------------------*/

Stack pop_stack(Stack st)
{
    StackElement *element;
    if (is_empty_Stack(st))
    {
        return new_stack();
    }
    element = st->next;
    free(st);
    return element;

}

/*------------------------------------------------------------------------------------*/

int top_stack(Stack st)
{
    if (is_empty_Stack(st))
    {
        printf("aucun sommet , la pile est vide!");
        return -1;
    }
    return st->value;
}

/*------------------------------------------------------------------------------------*/

int stack_lenght(Stack st)
{
    StackElement *element ;
    int com = 0;

    while (!is_empty_Stack(st))
    {
        com++;
        st = st->next;
    }

    return com;

}

/*------------------------------------------------------------------------------------*/

Stack sort_stack(Stack st)
{
    StackElement *element1;
    StackElement *element2;
    int tmp;

    if (is_empty_Stack(st))
    {
        return new_stack();
    }

    for (element1 = st; element1 -> next != NULL; element1 = element1 -> next)
    {
        for (element2 = element1 -> next; element2 != NULL; element2 = element2 -> next)
        {
            if (element2 ->value < element1 ->value)
            {
                tmp = element1->value;
                element1->value = element2 ->value;
                element2 ->value = tmp;
            }

        }
    }
    return st;
}

