 /*
 CH-230-A
 a4_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>

int main(){
    float radius, limit, step;
    scanf("%f", &radius);
    scanf("%f", &limit);
    scanf("%f", &step);

    float i;
    //Uses for loop to print out table 
    for(i = radius; i <= limit; i += step){
        /* includes expressions for perimeter and area directly 
        in arguments */
        printf("%f %f %f\n", i, (i * i * M_PI), (2 * i * M_PI));
    }
    return 0; 
}