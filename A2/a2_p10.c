/*
 CH-230-A
 a2_p10.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    int days, n, hours;
    scanf("%d", &n);
    if (n)
        days = 1;
        while(days <= n){
        hours = (days*24);
        printf("%5d days = %5d hours\n", days, hours);
            days++;
        }
    return 0;
}