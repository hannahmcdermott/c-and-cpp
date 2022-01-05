/*
 CH-230-A
 a3_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
int position(char str[], char c){
    int idx;
    //Loop until end of string
    for (idx = 0; str[idx] != '\0'; idx++){
        if(str[idx]==c){
            return idx;
        }
    }
    //int function has to return a value; -1 is a logical option 
    return -1;
}
int main(){
    char line[80];
    while(1){
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
        break;
    }
    return 0;
}