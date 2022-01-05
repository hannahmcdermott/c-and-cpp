/*
 CH-230-A
 a4_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h> 
#include <string.h>
#include <ctype.h>

//str[] =  character string 
//count = number of consonants in string 
//UCconsonants = constant character string of upper case consonants 
int count_consonants(char str[]){
    int count = 0;
    /*declares pointer that points to the first element of 
    character array (first character in string)*/
    char *p;
    const char *UCconsonants = "BCDFGHJKLMNPQRSTVWXYZ";
    for( p = str; *p != '\n'; p++){
        /* uses function strchr to look for uppercase character pointer p
        points to in constant character string UCconsonants */
        if (strchr(UCconsonants, toupper(*p)) != NULL){
            count++;
        }
    }
    return count;
    
}

int main(){
    char str[100];
    //repeatedly enter string
    while(str[0] != '\n'){
        fgets(str, sizeof(str), stdin);
        //jump out of loop
        if(str[0] == '\n') break; 
        //call function
        printf("Number of consonants=%d\n", count_consonants(str));
    }
    return 0; 
}