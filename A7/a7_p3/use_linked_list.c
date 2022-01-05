 /*
 CH-230-A
 a7_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
    struct list *list = NULL;
    
    
    while(1){
        char ch; 
        scanf("%c", &ch);
        
        //declares variable that is required for 'a' and 'b' options
        int n;

        //uses switch to compare input character with either a, b, 
        //r, p, or q

        switch (ch){
            case 'a' :
            scanf("%d", &n);
            list = push_back(list, n);
            break;

            case 'b' :
            scanf("%d", &n);
            list = push_front(list, n);
            break;

            case 'r' :
            list = remove_first(list);
            break;

            case 'p' :
            print_list(list);
            break;

            case 'q' :
            dispose_list(list); 
            //terminates program
            exit(0);
            break;
        }
    }
    return 0;
}