/*
 CH-230-A
 a3_p3.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
//conversion from cm to km 
float convert (int cm){
    return (float)cm/100000;
}
int main(){
    int cm; 
    scanf("%d", &cm);
    printf("Result of conversion: %f\n", convert(cm));
    return 0;
}