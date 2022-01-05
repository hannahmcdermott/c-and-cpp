/*
 CH-230-A
 a4_p8.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//array[n][n] = 2D array of n rows and n columns
//n = number of rows and columns
void printmatrix(int n, int array[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return;
}

void undersdiagonal(int n, int array[n][n]){
    for(int i = 1; i < n; i++){
        /* inverse relationship between the starting column and row,
        for every time row number goes up by one, column number goes
        down by one */
        for(int j = (n - i); (j < n); j++){
            printf("%d ", array[i][j]);
        }
    }
    return;
} 

int main(){
    int n;
    scanf("%d", &n);
    int integermatrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            //scans integers into 2D array 
            scanf("%d", &integermatrix[i][j]);
        } 
    }
    printf("The entered matrix is:\n");
    //calls first function to print matrix 
    printmatrix(n, integermatrix);
    printf("Under the secondary diagonal:\n");
    //calls second function to print numbers under secondary diagonal 
    undersdiagonal(n,integermatrix);
    printf("\n");
    return 0; 
}