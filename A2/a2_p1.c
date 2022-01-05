 /*
 CH-230-A
 a2_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <string.h>
#include <stdio.h>
int main() {
    //defining double, int, char variables
    double double_value1, double_value2, sum_of_doubles, diff_of_doubles, square_double1;
    int int_value1, int_value2, sum_integers, product_integers, product_char1, sum_char1;
    char char_value1, char_value2, sum_chars, product_char ;
    //scanning doubles, integers, and characters from the keyboard
    scanf("%lf", &double_value1);
    scanf("%lf", &double_value2);
    sum_of_doubles = double_value1 + double_value2;
    diff_of_doubles = double_value1 - double_value2;
    square_double1 = double_value1 * double_value1;
    scanf("%d", &int_value1);
    scanf("%d", &int_value2);
    sum_integers = int_value1 + int_value2;
    product_integers = int_value1 * int_value2; 
    getchar();
    scanf("%c", &char_value1);
    getchar();
    scanf("%c", &char_value2);
    sum_chars = char_value1 + char_value2;
    product_char = char_value1 * char_value2;
    product_char1 = char_value1 * char_value2;
    sum_char1 = char_value1 + char_value2; 
    printf("sum of doubles=%lf\n", sum_of_doubles);
    printf("difference of doubles=%lf\n", diff_of_doubles);
    printf("square=%lf\n", square_double1);
    printf("sum of integers=%d\n", sum_integers);
    printf("product of integers=%d\n", product_integers); 
    //Print sum and product of characters in decimal form
    printf("sum of chars=%d\n", sum_char1);
    printf("product of chars=%d\n", product_char1); 
    //Print sum and product of character in character format
    printf("sum of chars=%c\n", sum_chars);
    printf("product of chars=%c\n", product_char);

    return 0; 

}