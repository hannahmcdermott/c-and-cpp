 /*
 CH-230-A
 a2_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    int i = 8;
    //While loop needs braces {} to indicate the body of the while loop 
    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}