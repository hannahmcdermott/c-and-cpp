 /*
 CH-230-A
 a6_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
//define macro to swap two variables 
#define SWAP(variabletype, A, B) {variabletype x = A; A = B; B = x;}

int main(){
    int a, b;
    double y, z; 
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &y);
    scanf("%lf", &z);

    //macro swaps two int values
    SWAP(int, a, b);
    //macro swaps two float values 
    SWAP(double, y, z);
    
    //prints swapped values 
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    //using doubles for testcases even though 
    //assignment specifies 'floats'
    printf("%lf\n", y);
    printf("%lf\n", z);
    return 0; 
}