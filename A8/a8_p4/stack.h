 /*
 CH-230-A
 a8_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */  

/**
 * @file stack.h
 */

#pragma once

#include <stdio.h>
#include <stdlib.h>


struct stack
{
    unsigned int count;
    unsigned int array[12]; //container 
};


/**
 * @brief Pushes either 1 or 0 into stack.
 * 
 * Performs the modulus operation: x % 2; if the remainder is 0
 * then the number pushed into stack is 0, otherwise the number 
 * pushed is 1. 
 * 
 * @param x The value being converted into binary, which will be
 * divided by 2 until the result is <1.
 * @param s The pointer to the stack structure. 
 * 
 * @return 0 if unsuccessful, 1 if successful
 */

int push(int x, struct stack *s);

/**
 * @brief Pops a number off the top of the stack. 
 * 
 * Pops a number off the top by first checking if it is empty, 
 * in which case print "Stack Underflow". If not empty, assignes 
 * pointer to the last value in the stack and decreases the count
 * variable by one. 
 * 
 * @param x The pointer that returns the value which has been removed.
 * @param s The pointer to the stack structure. 
 * 
 * @return 0 if unsuccessful, 1 if successful
 */

int pop(struct stack *s, int *x);

/**
 * @brief Tests whether stack is empty.
 * 
 * Tests whether the stack is empty, i.e., the number of elements in 
 * the stack is 0. 
 *  
 * @param s The pointer to the stack structure. 
 * 
 * @return 1 if empty, 0 otherwise.
 */

int isempty(struct stack *s);

/**
 * @brief Empties the stack.
 * 
 * Empties the stack by first checking if it is already empty with
 * function isempty. If not, proceeds to remove all the stored items
 * by iterating through array and calling function pop in every iteration.
 *  
 * @param s The pointer to the stack structure. 
 */

void empty(struct stack *s);