 /*
 CH-230-A
 a6_p4.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

#define INTERMEDIATE 

int main(){
    //reads the dimension of the vector
    int n;
    scanf("%d", &n);

    //dynamic memory allocation for two int vectors
    int *intvector1;
    intvector1 = (int*) malloc(sizeof(int) * n);
    if (intvector1 == NULL){
        exit(1);
    }
    int *intvector2;
    intvector2 = (int*) malloc(sizeof(int) * n);
    if (intvector2 == NULL){
        exit(1);
    }

    //reads components of two int vectors
    for (int i = 0; i < n; i++){
        scanf("%d", &intvector1[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &intvector2[i]);
    }
    
    //initiales array for intermediate values 
    int intvalues[n];
    for (int i = 0; i < n; i++){
        intvalues[i] = intvector1[i] * intvector2[i];
    }

    //computes scalar product
    int scalprod = 0;
    for (int i = 0; i < n; i++){
        scalprod += intvalues[i];
    }

    //conditional compiliation for intermediate resutls 
    #ifdef INTERMEDIATE 
        printf("The intermeidate product values are:\n");
        for(int i = 0; i < n; i++){
            printf("%d\n", intvalues[i]);
        }
    #endif

    printf("The scalar product is: %d\n", scalprod);

    //frees allocated memory 
    free(intvector1);
    free(intvector2);
    return 0;
}
