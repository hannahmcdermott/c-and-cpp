 /*
 CH-230-A
 a2_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main(){
    float a, b, h;
    //Enter a length
    scanf("%f", &a);
    //Enter a width
    scanf("%f", &b);
    //Enter a height
    scanf("%f", &h);
    float square_area, rectangle_area, triangle_area, trapezoid_area;
    square_area = a * a;
    rectangle_area = a * b;
    triangle_area = (a * h)/2;
    trapezoid_area = ((a + b)/2)*h;
    printf("square area=%f\n", square_area);
    printf("rectangle area=%f\n", rectangle_area);
    printf("triangle area=%f\n", triangle_area); 
    printf("trapezoid area=%f\n", trapezoid_area);
    return 0;
}