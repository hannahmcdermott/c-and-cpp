 /*
 CH-230-A
 a2_p2.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    char char_value; 
    scanf("%c", &char_value);
    getchar();
    //Print character itself
    printf("character=%c\n", char_value);
    //Print in deciaml representation
    printf("decimal=%d\n",char_value);
    //Print in octal representation
    printf("octal=%o\n", char_value);
    //Print in hexadecimal representation
    printf("hexadecimal=%x\n", char_value);
    return 0;
}