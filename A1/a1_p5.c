 /*
 CH-230-A
 a1_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

int main() {
    int x = 2138; 
    printf("x=%9d\n", x);
    float y = -52.358925;
    printf("y=%11.5f\n", y);
    char z = 'G';
    printf("z=%c\n", z);
    double u = 61.295339687;
    printf("u=%.7lf\n", u);
    return 0;
}

/* To print the variable x = 2138 over nine places I used %9d because the 9 specifies the number of places 
to be used for integer x. To print the variable y = -52.358935 over eleven places and a precision of five 
decimal places I used %11.5f because the eleven specifies the number of places to be used and the .5 is the 
precision modifier. I printed the character 'G' using %c, since the variable z was declared a character. Lastly
I printed the double variable, u = 61.295339687, by using %.7f since the .7 is the precision modifier and the 
%f is used to print decimals. */