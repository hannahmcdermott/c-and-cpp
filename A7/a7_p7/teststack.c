 /*
 CH-230-A
 a7_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include "stack.h"  
#include <stdio.h>
#include <stdlib.h>

int main(void){
    struct stack s;
    //the stack has no elements in the beginning
    s.count = 0;
    while(1){
        char ch; 
        scanf("%c", &ch);
        getchar();
        
        //declares variable that is required for 's' option
        int x;

        //uses switch to compare input character with either s, p, 
        //e, q

        switch (ch){
            case 's' :
            scanf("%d", &x);
            getchar();
            //&s because of the pointer in the function
            push(x, &s);
            break;

            case 'p' :
            //&s because of the pointer in the function
            pop(&s, &x);
            break;

            case 'e' :
            //&s because of pointer in the function
            empty(&s);
            break;

            case 'q' :
            exit(0);
            break;
        }
    }
    return 0;
}