 /*
 CH-230-A
 a5_p8.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//arr = dynamically allocated array
//numrow = number of rows
//numcol = number of columns
void readingmatrix(int **arr, int numrow, int numcol){
    for (int i = 0; i < numrow; i++){
        for (int j = 0; j < numcol; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    return;
}

//arr = dynamically allocated array
//numrow = number of rows
//numcol = number of columns 
void printmatrix(int **arr, int numrow, int numcol){
    for (int i = 0; i < numrow; i++){
        for (int j = 0; j < numcol; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return;
}

//arr = first dynamically allocated array
//arr2 = second dynamically allocated array 
//result = the multiplication of arr * arr2
//n = number of rows for arr and result
//m = # of columns for arr, # of rows for arr2
//p = number of columns for arr2 and result 
void computingmult(int **arr, int **arr2, int **result,
                   int n, int m, int p){
    int i, j, k;
    for (i = 0; i < n; i++){
        for ( k = 0; k < p; k++){
            result[i][k] = 0;
            for (j = 0; j < m; j++){
                result[i][k] += arr[i][j] * arr2[j][k];
            }
        }  
    }
}

int main(){
    //scanning the dimensions for the arrays
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    int **first, **second, **result;
   
    //allocates memory for first 2D int array 
    first = (int **) malloc(sizeof(int *) * n);
    if(first == NULL){
        exit(1);
    } 
    for (int i = 0; i< n; i++){
        first[i] = (int *) malloc(sizeof(int) * m);
        if (first[i] == NULL){
            exit(1);
        }
    }
    //calls function to read the first matrix
    readingmatrix(first, n, m);

    //allocates memory for the second 2D array 
    second = (int **) malloc(sizeof(int *) * m);
    if(second == NULL){
        exit(1);
    } 
    for (int i = 0; i < m; i++){
        second[i] = (int *) malloc(sizeof(int) * p);
        if (second[i] == NULL){
            exit(1); 
        }
    }
    //calls function to read the second matrix 
    readingmatrix(second, m, p); 

    
    //allocates memory for the third 2D array 
    result = (int**) malloc(sizeof(int*) * n);
    if(result == NULL){
        exit(1);
    } 
    for (int i = 0; i< n; i++){
        result[i] = (int*) malloc(sizeof(int) * p);
        if (result[i] == NULL){
            exit(1);
        }
    } 
    //calls function to compute the result of (first * second)
    computingmult(first, second, result, n, m, p);
    
    //calls funciton printmatrix to print all the matrixes 
    printf("Matrix A:\n");
    printmatrix(first, n, m);
    printf("Matrix B:\n");
    printmatrix(second, m, p);
    printf("The multiplication result AxB:\n");
    printmatrix(result, n, p);
   
    //frees allocated memory for all three 2D arrays 
    for (int i = 0; i < n; i++){
        free(first[i]);
    }
    free(first);
    for (int i = 0; i < m; i++){
        free(second[i]);
    }
    free(second);
    for (int i = 0; i < n; i++){
        free(result[i]);
    }
    free(result); 
    
    return 0;
}
