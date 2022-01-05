/*
 CH-230-A
 a4_p13.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//*str = string 
void uppcase(char *str){
    for(int i = 0; str[i] != '\n'; i++){
        //isupper function returns 0 if character being tested is not uppercase
        if(isupper(str[i]) == 0 ){
            //converts to uppercase 
            str[i] = toupper(str[i]);
        }
    }
    return;
}
//*str = string 
void lowcase(char *str){
    for(int i = 0; str[i] != '\n'; i++){
        //islower function returns 0 if character being tested is not lowercase
        if(islower(str[i]) == 0){
            //converts to lowercase 
            str[i] = tolower(str[i]);
        }
    }
}

int main(){
    char str[90];
    //Repeatedly enter string 
    while(str[0] != '\n'){
        fgets(str, sizeof(str), stdin);
        //terminates program if entered string is "exit"
        if(strcmp (str, "exit\n") == 0){
            break;
        } 
        //calls functions uppcase and lowcase 
        uppcase(str);
        printf("uppcase=%s", str);
        lowcase(str);
        printf("lowcase=%s", str);
    }
    return 0;
}