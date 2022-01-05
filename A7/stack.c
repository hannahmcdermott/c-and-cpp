 /*
 CH-230-A
 a7_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include "stack.h"  
#include <stdio.h>
#include <stdlib.h>

//pushes a number into the stack 
int push(int x, struct stack *s){
    //checking if array is full or not 
    //if count is used as a counter of the elements
    //then stack is full if count == 12
    if(s->count == 12){
        printf("Stack Overflow\n");
        //passing struct as a pointer so changes
        //will be visible outside
        //return type int 0 if failed, 1 if successfull
        return 0;
    }
    else{
        //push means that value is added to the array 
        //array is inside of struct 
        s->array[s->count] = x;
        printf("%d\n", x);
        s->count++;
        return 0;
    }
}

//pops number off top of the stack and prints it
//x returns by reference the value which has been 
//removed from the stack
int pop(struct stack *s, int *x){
    //checks if array is empty 
    //if count is used as counter then 
    //empty means count == 0
    if (s->count == 0){
        printf("Stack Underflow");
        //returns 0 if failed, 1 if successfull 
        return 0;
    }
    //if count is how many elements then the last 
    //element is on position count-1
    *x = s->array[s->count-1];
    printf("%d ", *x);
    s->count--;
    return 1;

}

//checks if stack is already empty 
//returns int 1 if empty, 0 if not
int isempty(struct stack *s){
    //this will be 0 if false, and 1 if true
    return s->count == 0; 
}

//empties stack  
void empty(struct stack *s){
    //checks if stack is already empty 
    int x;
    if (!isempty(s)){
        printf("Emptying Stack ");
        //while popping s->count will changed 
        //saving original value in variable items
        int items = s->count;
        for(int i = 0; i < items; i++){
            pop(s, &x);
        }
    }
    return;
}
   