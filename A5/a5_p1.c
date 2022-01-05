 /*
 CH-230-A
 a5_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

// n = height and starting width of triangle 
// ch = character to print 
void print_triangle(int n, char ch){
    int i, j;
    for(i = 1; i <= n; i++){
        /* every row prints one character less than the last row 
        so for every row it should print <= n - i columns */
        for(j = 0; j <= (n-i); j++){
            printf("%c", ch);
        }
        printf("\n");
    }
    return;
}

int main(){
    int n;
    char ch;
    //Scans an integer and a character from keyboard
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    
    //Calls function print_triangle 
    print_triangle(n, ch);
    return 0;
}