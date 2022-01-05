 /*
 CH-230-A
 a5_p2.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */
 
#include <stdio.h>
//arr[] = array of floats
//size = number of elements in array
void divby5(float arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = (arr[i] / 5);
    }
}
 
int main(){
    //fixed array
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36}; 
    printf("Before:\n");
    for(int i = 0; i < 6; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\nAfter:\n");
    //calls function divby5 to divide every element by 5
    divby5(arr, 6);
    for(int i = 0; i < 6; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}
