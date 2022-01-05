 /*
 CH-230-A
 a8_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

/**
 * @file stack.c
 */

#include "stack.h"  
#include <stdio.h>
#include <stdlib.h>

int push(char word[], struct stack *ws)
{
    else
    {
        ws->word[ws->count] = ch; 
        ws->count++;
        
    }
    return 1;
}

/*int pop(struct stack *s, int *x)
{
    if (s->count == 0)
    {
        printf("Stack Underflow\n");
        return 0;
    }
    x = s->array[s->count-1];
    printf("Popping %d\n", *x);
    s->count--;
    return 1;

}


int isempty(struct stack *s)
{
    return s->count == 0; 
}


void empty(struct stack *s){
    int x;
    if (!isempty(s))
    {
        printf("Emptying Stack ");
        int items = s->count;
        for(int i = 0; i < items; i++)
        {
            pop(s, &x);
        }
    }
    return;
}*/
   