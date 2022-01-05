 /*
 CH-230-A
 a8_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

/**
 * @file convertingstack.h
 */

#include "stack.h"  
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //the stack has no elements in the beginning
    struct stack s;
    s.count = 0;
    
    unsigned int x;
    scanf("%d", &x);
    
    //&s because of the pointer in the function
    push(x, &s);
    printf("The binary representation of %d is ", x);
    for (int i = (s.count-1); i >= 0; i--)
    {
        printf("%d", s.array[i]);
    }
    printf("\n");

    return 0;
}