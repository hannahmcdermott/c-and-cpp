 /*
 CH-230-A
 a1_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

int main () {
    int x = 17, y = 4;
    int sum = x + y;
    printf("x=17\n");
    printf("y=4\n");
    printf("sum=%d\n", sum);
    int product = x * y;
    printf("product=%d\n", product);
    int difference = x - y;
    printf("difference=%d\n", difference);
    float x2 = 17, y2 = 4;
    float division = x2 / y2;
    printf("division=%f\n", division);
    int modulo = x%y;
    printf("remainder of division=%d\n", modulo);
    return 0;
}

/* To print the sum, the product, the difference, and the remainder, I used %d because the sum, product, 
difference, and modulo variables were declared as integers. To print the correct division of x/y, I redefined
the variables to float variables x2 and y2. I used %f to print the division as that command specifies that 
the variable has to be formatted as a decimal.*/