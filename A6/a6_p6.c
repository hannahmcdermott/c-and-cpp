 /*
 CH-230-A
 a6_p6.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

int main(){
    unsigned char c;
    //scans unsigned character 
    scanf("%c", &c);
    getchar();
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");

    //iterates through binary representation of character using for loop
    //starts by moving binary representation to the right 7 bits 
    //masks shifted binary representation of character and 1 to print either 1 or 0
    for (int i = 7; i >= 0; i--){
        printf("%d", (((int)c >> i) & 1));
    }
    printf("\n");
   
    return 0;

}