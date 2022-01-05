/*
 CH-230-A
 a3_p8.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h> 

/* a[]: array of floats entered
n: number of elements in array a */
float sum_of_floats(float a[], int n){
    float sum = 0; 
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}

/* a[]: array of floats
n: number of elements in array a */
float avg_of_floats(float a[], int n){
    int i = 0;
    float sum = 0; 
    for (i = 0; i < n; i++){
        sum += a[i];
    }
    float avg;
    avg = (sum / n);
    return avg;
}

int main(){ 
    printf("Enter up to 10 floats or enter -99.0 to stop entering:\n");
    float values[10];
    int i, count;
    count = 0; 
    for(i = 0; i < 10; i++){
        /*Need a 'count' variable that will keep track of 
        how many elements are entered */
        count++;
        scanf("%f", &values[i]);
        if (values[i] == -99.0){
            count--;
            break;
        } 
    } 
    /* Calling function sum_of_floats and avg_of_floats to 
    print the sum and avg of values entered */
    printf("Sum of values=%lf\n", sum_of_floats(values, count));
    printf("Average of values=%lf\n", avg_of_floats(values, count));
    return 0;
}

