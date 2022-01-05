 /*
 CH-230-A
 a7_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>

//function will be called with qsort so parameters have to be
//(const void *a, const void *b)
//sorts numbers in ascending order 
int ascending(const void *a, const void *b){
    //converts from const void to const int 
    //declares const int *c and const int *d to not change data
    const int *c = (const int *) a;
    const int *d = (const int *) b;  
    //accesses content of pointers 
    if (*c < *d){
        return -1;
    }
    else if (*c > *d){
        return 1;
    }
    else{
        return 0;
    }
}

//function will be called with qsort so parameters have to be
//(const void *a, const void *b)
//sorts numbers in descending order 
int descending(const void *a, const void *b){
    //avoid usage of global variables (const void *a, const void *b)
    const int *c = (const int *) a;
    const int *d = (const int *) b;  
    if (*c > *d){
        return -1;
    }
    else if (*c < *d){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    //scans number of elements 
    scanf("%d", &n);
    //declares array of n elements
    int arr[n];
    //scans elements into array arr[i]
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    char ch; 

    while(1){
        //scans character 
        
        getchar();
        scanf("%c", &ch);
        
        //if character is 'a' qsort is called with ascending function
        if (ch == 'a'){
            qsort(arr, n, sizeof(arr[0]), ascending);
            for (int i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        //if character is 'd' qsort is called with descending function
        if (ch == 'd'){
            qsort(arr, n, sizeof(arr[0]), descending);
            for (int i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        //if character 'e' program terminates 
        if (ch == 'e'){
            exit(0);
        }
    }
    return 0;
}