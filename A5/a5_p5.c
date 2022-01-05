 /*
 CH-230-A
 a5_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//arr = array of doubles
//n = size of array
double findingmax(double *arr, int n){
    double max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//arr = array of doubles 
//n = size of array 
int findingmaxpos(double *arr, int n){
    double max = arr[0];
    //initializes position variable 
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            pos = i;
        }
    }
    return pos;
} 

//arr = array of doubles
//n = size of array 
double findingmin(double *arr, int n){
    double min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

//arr = array of doubles
//n = size of array 
int findingminpos(double *arr, int n){
    double min = arr[0];
    //initializes position variable 
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            pos = i; 
        }
    }
    return pos; 
} 

//v = array of doubles
//w = array of doubles
//n = size of array v and array w 
double scalarproduct(double *v, double *w, int n){
    double scalprod = 0;
    for (int i = 0; i < n; i++){
        //computes scalar product
        scalprod += v[i] * w[i];
    }
    return scalprod;
}

int main(){
    int n;
    scanf("%d", &n);
    
    //dynamic memory allocation for vector v
    double *v; 
    v = (double *) malloc(sizeof(double) * n);
    //dynamic memory allocaiton for vector w 
    double *w;
    w = (double *) malloc(sizeof(double) * n);
   
    for(int i = 0; i < n; i++){
        scanf("%lf", &v[i]);       
    }
    for (int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }
    
    //calls functions and prints values 
    printf("Scalar product=%lf\n", scalarproduct(v, w, n));
    printf("The smallest = %lf\n", findingmin(v, n));
    printf("Position of smallest = %d\n", findingminpos(v, n));
    printf("The largest = %lf\n", findingmax(v, n));
    printf("Position of largest = %d\n", findingmaxpos(v, n));
    printf("The smallest = %lf\n", findingmin(w, n));
    printf("Position of smallest = %d\n", findingminpos(w, n));
    printf("The largest = %lf\n", findingmax(w, n));
    printf("Position of largest = %d\n", findingmaxpos(w, n));
   
    //frees allocated memory  
    free(v);
    free(w);
    return 0; 
 }