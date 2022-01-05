 /*
 CH-230-A
 a3_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

/* n: height of trapezoid 
m: starting width of trapezoid
c: character to print */
void print_form(int n, int m, char c){
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= (m + i - 1); j++){
            printf("%c", (c));
        }
        printf("\n");
    }
    return;
}

int main(){
    int n, m;
    char c;
    //Enter two integers and a character 
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
   
    //Call function print_form
    print_form(n, m, c);
    return 0;
}