/*
 CH-230-A
 a4_p2.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int main(){
    char zigzag[51];
    fgets(zigzag, sizeof(zigzag), stdin);
    //negates the '\n' that fgets scans 
    zigzag[strlen(zigzag) - 1] = '\0'; 
    int i;
    // Uses for loop to print the characters of the string
    for(i = 0; i < strlen(zigzag); i++){
        //If i is even prints without space 
        if(i%2 == 0){
            printf("%c\n", zigzag[i]);
        }
        //If i is odd print with space 
        if(i%2 != 0){
            printf(" %c\n", zigzag[i]);
        }
    }
    return 0;
}