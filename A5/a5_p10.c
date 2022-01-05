 /*
 CH-230-A
 a5_p10.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

//n = integer function will start counting down from
void countingdown(int n){
    if (n == 1){
        printf("%d\n", n);
        return;
    }
    else {
        printf("%d\n", n);
        countingdown(n - 1);
        return;
    }
}

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    /*calls recursive function to 
    print numbers counting down from n*/
    countingdown(n);
    printf("\n");
    return 0;
} 