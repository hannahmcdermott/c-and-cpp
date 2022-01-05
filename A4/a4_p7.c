/*
 CH-230-A
 a4_p7.c
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

void undermdiagonal(int n, int array[n][n]){
    for(int i = 1; i < n; i++){
        /*j is less than or equal to i to print 
        only numbers under main diagonal */
        for(int j = 1; j <= i; j++){
            printf("%d ", array[i][j-1]);
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
            scanf("%d", &integermatrix[i][j]);
        } 
    }
    printf("The entered matrix is:\n");
    //calls first function to print matrix 
    printmatrix(n, integermatrix);
    printf("Under the main diagonal:\n");
    //calls second function to print numbers under main diagonal 
    undermdiagonal(n,integermatrix);
    printf("\n");
    return 0; 
}