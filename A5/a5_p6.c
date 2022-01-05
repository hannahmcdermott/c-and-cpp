 /*
 CH-230-A
 a5_p6.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    //initializes pointer p 
    float arr[n], *p;
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    //sets pointer to point to first element in array arr
    //goes through loop using pointer arithmetic
    for(p = arr; *p != arr[n-1]; p++){
        if(*p < 0){
            /*difference of p - arr gives position of first negative 
            value, therefore the same as number of elements before that value*/
            printf("Before the first negative value: %ld elements\n", (p - arr));
        }
    }
    return 0;
}