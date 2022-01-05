 /*
 CH-230-A
 a1_p3.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    // The result of the division
    float result;
    int a = 5;
    // 'int b' was changed to 'float b' because 'int' would change the value from 13.5 to 13
    float b = 13.5;
    result = a / b;
    // '%d' was changed to '%f' because the argument (result) is of type 'float' rather than type 'int'
    printf("The result is %f\n", result);
    return 0;
}