/*
 CH-230-A
 a3_p9.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

/* v[]: array of double values
n: nth element of array */
double sum25(double v[], int n){
    if(n >= 6){
        double sum = v[2] + v[5];
        return sum;
    }
    else {
        return -111;
    }   
}

int main(){
    int n, i;
    scanf("%d", &n);
    
    //Enter at most 20 floats    
    if (n <= 20){
        double elem[n];
        for(i = 0; i < n; i++){
            scanf("%lf", &elem[i]);
        }
        //Printing sum of only valid cases
        if (n >= 6){
            printf("sum=%lf\n", sum25(elem, i));
        }
        if(n < 6){
            printf("One or both positions are invalid\n");
        }
    }
    return 0;
}