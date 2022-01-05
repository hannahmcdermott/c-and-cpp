 /*
 CH-230-A
 a5_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    //gets rid of the '\n' scanned by fgets at the end of the string
    str1[strlen(str1) - 1] = '\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0';

    //concatenates str1 and str2; str1 stays concatenated 
    strcat(str1, str2);
    
    /*dynamic memory allocation for string str3 of exact size 
    of concatenated strings*/
    char *str3;
    str3 = (char *) malloc(sizeof(char) * (strlen(str1))); 
    
    //copies str1 (concatenated string) into str3
    strcpy(str3, str1); 
    printf("Result of concatenation: %s\n", str3); 
    return 0;  
}