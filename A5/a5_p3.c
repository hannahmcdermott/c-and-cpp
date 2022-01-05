 /*
 CH-230-A
 a5_p3.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <ctype.h>

//*str = string  
int count_lower(char *str){
    int count = 0; 
    //uses pointer to walk through string 
    char *p;
    for (p = str; *p != '\n'; p++){
        //tests whether element in *p is a lowercase
        if(islower(*p) > 0){
            count++;
        }
    }    
    return count;
}

int main(){
    char str[51];
    //repeatedly enter string 
    printf("Enter a sentence: ");
    while(str[0] != '\n'){
        fgets(str, sizeof(str), stdin);
        //jumps out of loop 
        if(str[0] == '\n') break;
        //calls function count_lower 
        printf("There are %d lowercase characters in your sentence\n", count_lower(str));
    }
    return 0;
}