 /*
 CH-230-A
 a3_p6.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
//conversion from kg and g to pounds 
float to_pounds(int kg, int g){
    return ((float)kg*2.2 + (float)g*0.0022);
}
int main(){
    int kg, g;
    scanf("%d\n%d", &kg, &g);
    printf("Result of conversion: %f\n", to_pounds(kg,g));
    return 0;
}