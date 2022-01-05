/*
 CH-230-A
 a4_p10.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, 
float *invb){
    *prod = a * b;
    *div = a / b;
    *pwr = (float) pow(a, b);
    *invb = (1.0/b);
}

int main(){
    float a, b;
    printf("Enter float 1: ");
    //scans two floats 
    scanf("%f", &a);
    printf("Enter float 2: ");
    scanf("%f", &b);

    float prod, div, pwr, invb;
    /* & indicates that the pointers in the function parameters will pass 
    their values to float variables prod, div, pwer, and invb */
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("%f * %f = %f\n", a, b, prod);
    printf("%f / %f = %f\n", a, b, div);
    printf("%f to the power of %f = %f\n", a, b, pwr);
    printf("1 / %f = %f\n", b, invb);
    return 0;
}