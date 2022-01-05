 /*
 CH-230-A
 a2_p6.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    double x, y; 
    printf("Enter double value:");
    scanf("%lf", &x);
    printf("Enter double value:");
    scanf("%lf", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    //Print the memory addresses of all pointers 
    printf("Pointer 1 memory address: %p\n", ptr_one);
    printf("Pointer 2 memory address: %p\n", ptr_two);
    printf("Pointer 3 memory address: %p\n", ptr_three);
    return 0;  
}