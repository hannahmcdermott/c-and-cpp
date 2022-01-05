 /*
 CH-230-A
 a6_p3.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
//function-like macros for finding the min, max
//and the mid-range of values 
#define MIN(A, B) (A) < (B) ? (A) : (B)
#define MAX(A, B) (A) > (B) ? (A) : (B)
#define MIDRANGE(A, B) ((double) (A + B) / 2)

int main(){
    //scans 3 integers 
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    //declares min and max variables to store values of
    //that macros find to be the min/max of the three integers
    int min = MIN(MIN(a, b), c); 
    int max = MAX(MAX(a, b), c);
    double x; 
    x = MIDRANGE(min, max);
    printf("The mid-range is: %lf\n", x);

    return 0;

}