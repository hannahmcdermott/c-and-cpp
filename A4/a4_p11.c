/*
 CH-230-A
 a4_p11.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//*str = character array that has been dynamically allocated 
//c = character that is being counted 
int count_insensitive(char *str, char c){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        /* uses || so that overall value of tests is true if 
        one of them is true */
        if(( str[i] == toupper(c)) || str[i] == tolower(c)) {
            count++;
        }     
    }
    return count;
}

int main(){
    char *a_str;
    a_str = (char *) malloc(sizeof(char) * 50);
    //reads input string 
    fgets(a_str, 50, stdin);
    a_str[strlen(a_str)-1] = '\0';
    char *a_str2;
    //allocates memory according to the length of a_str
    a_str2 = (char *) malloc(sizeof(char) * (strlen(a_str)));
    strcpy(a_str2, a_str); 
    free(a_str);
    /*calls function count_insensitive to check for occurances of characters 
    'b', 'H', '8', 'u', '$' */
    printf("The character 'b' occurs %d times\n", count_insensitive(a_str2, 'b'));
    printf("The character 'H' occurs %d times\n", count_insensitive(a_str2, 'H'));
    printf("The character '8' occurs %d times\n", count_insensitive(a_str2, '8'));
    printf("The character 'u' occurs %d times\n", count_insensitive(a_str2, 'u'));
    printf("The character '$' occurs %d times\n", count_insensitive(a_str2, '$'));
    
    return 0;
}