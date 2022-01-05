 /*
 CH-230-A
 a6_p2.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

//Macro substitution of X with (X & 1) 
//X & 1 will evaluate 1 if corresponding last bits of both are 1
//X & 1 will evaluate 0 if corresponding last bits are 1 and 0   
#define LSB(X) {X & 1}

int main(){
    unsigned char a;
    scanf("%c", &a);
    printf("The decimal representation is: %d\n", a);
    //LSB(A) returns either 1 or 0
    int n = LSB(a);
    printf("The least significant bit is: %d\n", n);
    return 0;
}