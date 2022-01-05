/*
 CH-230-A
 a4_p9.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//arr = array of integers 
// n = number of elements in array 
int prodminmax(int arr[], int n){
    //finds min value in arr[]
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    //finds max value in arr[]
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int prod = min * max;
    return prod;
}

// *arr = dynamic array
// n = elements in array 
int main(){
    int *arr, n;
    printf("How many elements?\n");
    scanf("%d", &n); 
    //allocates memory to type int array of n elements 
    arr = (int*) malloc(sizeof(int) * n);
    //checks to see if malloc returns valid pointer 
    if (arr == NULL){
        exit (1);
        //program terminates if no elements
    }
    for (int i = 0; i < n; i++){
        printf("Integer %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    //calls function to print product of min and max values entered into arr 
    printf("min value * max value = %d\n", prodminmax(arr, n));
    //deallocates memory 
    free(arr);
    return 0;
}
