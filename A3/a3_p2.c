/*
 CH-230-A
 a3_p2.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main(){
    char ch;
    int n, idx;
    scanf("%c", &ch);
    scanf("%d", &n);
    //First print character alone
    printf("%c\n", ch);
    //Print 1 to n integers after character  
    for(idx=1; idx<=n; idx++){
        printf("%c",ch);
        printf("-%d\n", idx);
    }
    return 0;
}