 /*
 CH-230-A
 a8_p5.c
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
    struct wordstack ws;
    ws.count = 0;
    
    
    while(1)
    {
        while (1)
        {
            char ch;
            scanf("%c", &ch);
            getchar();
            push(ch, &ws);
            if (ch == ' ') exit(0);   
        }


    }
        

    for (int i = (ws.count-1); i >= 0; i--)
    {
        printf("%ch", ws.word[i]);
    }
    printf("\n");

    return 0;
}