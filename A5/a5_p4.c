 /*
 CH-230-A
 a5_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//arr = array of floats
//n = size of array 
void divby5(float *arr, int n){
    for(int i = 0; i < n; i++){
        arr[i] = (arr[i] / 5);
    }
}

int main(){
    int n;
    printf("Enter intenger: ");
    scanf("%d", &n);
    //dynamic memory allocation for array arr
    float *arr;
    arr = (float *) malloc(sizeof(float) * n);

    printf("Enter %d numbers:\n", n);
    //scans numbers into arr
    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    //prints entered numbers from keyboard
    printf("Before:\n");
    for(int i = 0; i < n; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\nAfter:\n");
    //calls function divby5 to divide every element by 5
    divby5(arr, n);
    for(int i = 0; i < n; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    //frees allocated memory
    free(arr);
    return 0;
}