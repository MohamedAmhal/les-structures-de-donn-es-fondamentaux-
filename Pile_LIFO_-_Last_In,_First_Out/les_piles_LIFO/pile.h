#ifndef PILE_H
#define PILE_H
#include <stdbool.h>

    /* type boolean */
typedef enum
{
    False, // 0
    True   // 1
}Bool;

    /* definition d'une plie */

typedef struct StackElement
{
    int value;
    struct StackElement *next;

}StackElement, *Stack;

   /* les prototype des fonctions */
Stack new_stack(void);     /*la creation d'une pile*/
bool is_empty_Stack(Stack st);   /*verifier si la pile est vide pu pas*/
Stack push_element(Stack st, int z); /* la fonction pour ajouter les element a la pile*/
Stack free_memory(Stack st); /* la fonction pour libiber la memoire */
void print_stack(Stack st); /* la fonction qui permet d'afficher la pile */
Stack pop_stack(Stack st); /* enlever un element de la pile LAST in FIRST out! */
int top_stack(Stack st); /* voir le top de la pile */
int stack_lenght(Stack st); /* voir la langeur de la pile */
Stack sort_stack(Stack st); /* le trie d'une pile */













#endif