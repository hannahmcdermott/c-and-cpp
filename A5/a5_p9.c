 /*
 CH-230-A
 a5_p9.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//arr = 3D array dynamically allocated 
//rows = number of rows of arr
//columns = number of columns of arr
//depth = depth of arr 
void reading3Darray(int ***arr, int rows, int columns, int depth){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            for (int k = 0; k < depth; k++){
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    return;
}

//arr = 3D array dynamically allocated
//x = number of rows of arr
//y = number of columns of arr
//z = depth of arr 
void printing2Dsections(int ***arr, int x, int y, int z){
 //2D sections all have same depth in 3D array so for loop starts with depth
 for(int i = 0; i < z; i++){
        printf("Section %d:\n", i + 1);
        for( int j = 0; j < x; j++){
            for( int k = 0; k < y; k++){
                //need to use j,k, i and not x, y, z (the dimensions)
                printf("%d ", arr[j][k][i]);
            }
            printf("\n");
        }
    }
}

int main(){
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    //allocates memory for 3D array 'a' 
    int ***a;
    a = (int ***) malloc(sizeof(int**) * x);
    if(a == NULL){
        exit(1);
    }
    for (int i = 0; i < x; i++){
        a[i] = (int **) malloc(sizeof(int *) * y);
        if(a[i] == NULL){
            exit(1);
        }
        for (int j = 0; j < y; j++){
            a[i][j] = (int*) malloc(sizeof(int) * z);
            if (a[i][j] == NULL){
                exit(1);
            }
        } 
    }
    //calls function to read input values of 3D array 
    reading3Darray(a, x, y, z);
    
    //callsfunction to print 2D sections of 3D array 
    printing2Dsections(a, x, y, z);

    //frees allocated memory of 3D array
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            free(a[i][j]);
        }
    }
    for(int i = 0; i < x; i++){
        free(a[i]);
    }
    free(a);

    return 0;
}