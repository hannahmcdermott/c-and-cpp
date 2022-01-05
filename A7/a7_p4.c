 /*
 CH-230-A
 a7_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//*str = string being manipulated
//prints all characters in uppercase 
void uppcase(char *str){
    char str2[100];
    int i;
    for(i = 0; str[i] != '\0'; i++){
            //does not change original string 
            str2[i] = toupper(str[i]);
    }
    //properly ends the string 
    str2[i] = '\0';
    printf("%s\n", str2);    
}

//*str = string being manipulated
//prints all characters in lowercase 
void lowcase(char *str){
    char str2[100];
    int i;
    for(i = 0; str[i] != '\0'; i++){
            //does not change original string
            str2[i] = tolower(str[i]);
    }
    //properly ends the string
    str2[i] = '\0';
    printf("%s\n", str2);   
}

//*str = string being manipulated
//prints uppercase characters as lowercase and viceversa
void viceversa(char *str){
    char str2[100];
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(isupper(str[i]) == 0 ){
            //converts to uppercase 
            //maintains original string
            str2[i] = toupper(str[i]);
        }
        else if(islower(str[i]) == 0){
            //converts to lowercase 
            //maintains original string
            str2[i] = tolower(str[i]);
        }
        //if str[i] is a space or other character
        else {
            str2[i] = str[i];
        }
    }
    str2[i] = '\0';
    printf("%s\n", str2);
}
//stops while loop in the main 
void stoploop(char *str){
    exit(0);
}

int main(){
    char str[100];
    //scans input string from keyboard 
    fgets(str, sizeof(str), stdin);
    //cancels the 'enter' that fgets scans 
    str[strlen(str)-1] = '\0';
    //declares character that will map command to corresponding function 
    char choice; 
    //array of function pointers that point to functions: 
    //uppcase, lowcase, viceversa, and stoploop
    void (*converter[4])(char *) = {uppcase, lowcase, viceversa, stoploop};
    while(1){
        //scans character from keyboard 
        scanf("%c", &choice);
        getchar();
        //uses ASCII code to make 'converter['1' - 49]' -> 'converter[0]'
        //converter['2' - 49] -> converter[1] 
        converter[choice - 49](str);
    }
    return 0;
}