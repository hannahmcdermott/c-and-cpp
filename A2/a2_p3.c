 /*
 CH-230-A
 a2_p3.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
int main() {
    int hours, days, weeks, total_number_hours;
    printf("Enter integer number of hours:");
    scanf("%d", &hours);
    printf("Enter integer number of days:");
    scanf("%d", &days);
    printf("Enter integer number of weeks:");
    scanf("%d", &weeks);
    /*There are 24 hours in one day and 168 hours in one week, therefore the total number of hours in n days 
    is (n * 24) and the total number of hours in n weeks is (n * 168) */
    total_number_hours = hours + (days * 24) + (weeks * 168);
    printf("Total number of hours = %d\n", total_number_hours);
    return 0;

}