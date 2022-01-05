 /*
 CH-230-A
 a3_p10.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

//when product function is called, it will return the product
float product(float a, float b){
    float product;
    product = a * b;
    return product; 
}

/* productbyref uses pointer p to pass the value to a 
variable in the main function */ 
void productbyref(float a, float b, float *p){
    *p = (a * b);
}

/* pointers a and b are used to modify the values
by reference in main function */
void modifybyref(float *a, float *b){
    *a += 3;
    *b += 11;
}

int main(){
    float a, b, p;
    printf("Enter first float:");
    scanf("%f", &a);
    printf("Enter second float:");
    scanf("%f", &b);
    
    //calling function to print the return value 'product'
    printf("product=%f\n", product(a, b));

    /* &p indicates pointer to float p, passes product to p*/ 
    productbyref(a, b, &p);
    printf("product by reference=%f\n", p);

    /* &a indicates pointer to a and &b indicates pointer to b */
    modifybyref(&a, &b);
    printf("first float modified by reference=%f\n", a);
    printf("second float modified by reference=%f\n", b);

}