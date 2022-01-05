/*
 CH-230-A
 a4_p12.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//*str = string 
//c = character to replace 
//c = character to replace c with 
void replaceAll(char *str, char c, char e){
    for(int i = 0; str[i] != '\n'; i++){
        if(str[i] == c){
            str[i] = e;
        }
    }
    return; 
}

int main(){
    char str[80], c, e;
    //repeatedly enter string;
    while(*str != '\n'){
        printf("Enter a sentence: ");
        fgets(str, sizeof(str), stdin);
        //terminate program if entered string is "stop"
        if(strcmp (str, "stop\n") == 0){
            break;
        }
        printf("Enter character to replace:");
        scanf("%c", &c);
        getchar();
        printf("Enter character to replace %c with:", c);       
        scanf("%c", &e);
        getchar();
         
        printf("replace all occurances of %c with %c in\n", c, e);
        printf("%s", str);
        
        //calls function
        replaceAll(str, c, e);
        printf("%s", str);
    }
    return 0; 
}