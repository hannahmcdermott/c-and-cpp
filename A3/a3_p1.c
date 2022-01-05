 /*
 CH-230-A
 a3_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main(){
    float x;
    int n, idx;
    idx = 1;
    scanf("%f", &x);
    scanf("%d", &n);
    //Has to be a valid integer value  
    while(n<=0){
            printf("Input is invalid, reenter value\n");
            scanf("%d", &n);
        } 
    //Print float x, n times
    for(idx = 1; idx <=n; idx++){
            printf("%f\n", x);
        }
    return 0;
}