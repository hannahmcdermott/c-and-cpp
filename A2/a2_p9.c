 /*
 CH-230-A
 a2_p9.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    char a; 
    scanf("%c", &a);
    //variable a is a letter if it is between a-z or A-Z
    if ((a >= 'A') && (a <= 'Z')){
        printf("%c is a letter\n", a);
    }
    else if((a >= 'a') && (a <= 'z')){
        printf("%c is a letter\n", a);
    }
    //variable a is a digit if it is between 0-9
    else if((a >= '0') && (a <= '9')){
        printf("%c is a digit\n", a);
    }
    else {
        printf("%c is some other symbol\n", a);
    }
    return 0;
} 