 /*
 CH-230-A
 a2_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    int a; 
    printf("Enter an integer:"); 
    scanf("%d", &a);
    int *ptr_a;
    ptr_a = &a;
    //Print the value and current address 
    printf("Value: %d\n", a);
    printf("Address: %p\n", ptr_a);
    *ptr_a += + 5;
    ptr_a += 5;  
    //Print modified value and address 
    printf("Modified value: %d\n", a);
    printf("Modified address: %p\n", ptr_a);
    return 0;
}