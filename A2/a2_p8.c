 /*
 CH-230-A
 a2_p8.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    //Enter an integer
    int a;
    scanf("%d", &a); 
    /*If the modulo division by 2 is 0 and the modulo division by 7 is 0, then
    int a is divisible by both 2 and 7*/
    if ((a%2 == 0) && (a%7 == 0)) {
        printf("The number is divisible by 2 and 7\n");
    }
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}