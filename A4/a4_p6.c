/*
 CH-230-A
 a4_p6.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//arr[] = array of integers
//num = number of elements in array arr
//*mx1 pointer that will pass greatest value of array
//*mx2 pointer that will pass second greatest value of array 
void findingmax1max2(int arr[], int num, int *mx1, int *mx2){
    //local variables max1 and max2 
    int max1 = arr[0];
    for(int i = 1; i < num; i++){
        if(arr[i] > max1){
            max1 = arr[i];
            *mx1 = max1; 
        }
    }
    int max2 = arr[0];
    for(int j = 1; j < num; j++){
        //second greatest value condition, has to be less than max1
        if((arr[j] > max2) && (arr[j] < max1)){
            max2 = arr[j];
            *mx2 = max2;
        }
    }
    return;
}


// *arr_ints = dynamic array
// n = n elements in array entered from keyboard  
int main(){
    int *arr_ints, n;
    printf("How many elements?\n");
    scanf("%d", &n); 
    //allocates memory to type int array of n elements 
    arr_ints = (int*) malloc(sizeof(int) * n);
    
    //checks to see if malloc returns valid pointer 
     if (arr_ints == NULL){
        exit (1);
        //program terminates if no elements are entered
    }
    
    for (int i = 0; i < n; i++){
        printf("Enter integer %d\n", i + 1);
        scanf("%d", &arr_ints[i]);
    }
   
    int mx1, mx2;
    /* calling function to pass two greatest values of array 
    to int mx1 and int mx2*/
    findingmax1max2(arr_ints, n, &mx1, &mx2);
    printf("Max1 = %d\n", mx1);
    printf("Max2 = %d\n", mx2);
    //memory is released 
    free(arr_ints);
    return 0;
}
