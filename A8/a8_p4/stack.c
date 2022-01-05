 /*
 CH-230-A
 a8_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

/**
 * @file stack.c
 */

#include "stack.h"  
#include <stdio.h>
#include <stdlib.h>

int push(int x, struct stack *s)
{
    if (s->count == 12)
    {
        printf("Stack Overflow\n");
        return 0;
    }
    
    else
    {
        while ((x / 2) != 0)
        {
            if (x % 2 == 0) 
            {
                s->array[s->count] = 0; 
                s->count++;
            }
            else 
            {
                s->array[s->count] = 1;
                s->count++;
            }
        x /= 2;  
        }

        if (x % 2 != 0)
        {
            s->array[s->count] = 1;
            s->count++;
        }
    }
    return 0;
}

int pop(struct stack *s, int *x)
{
    if (s->count == 0)
    {
        printf("Stack Underflow\n");
        return 0;
    }
    *x = s->array[s->count-1];
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
}
   