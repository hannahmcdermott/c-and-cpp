 /*
 CH-230-A
 a7_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */  

#pragma once
#include <stdio.h>
#include <stdlib.h>

struct stack{
    unsigned int count;
    int array[12]; //Container 
};

//pushes a number into the stack 
int push(int x, struct stack *s);

//pops number off top of the stack and prints it
//x returns by reference the value which has been 
//removed from the stack
int pop(struct stack *s, int *x);

//checks if stack is already empty 
//returns int 1 if empty, 0 if not
int isempty(struct stack *s);

//empties stack  
void empty(struct stack *s);