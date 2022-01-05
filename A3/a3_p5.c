 /*
 CH-230-A
 a3_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
//scans character first from keyboard
int main(){
    char c;
    printf("Enter character:\n");
    scanf("%c", &c);
    getchar();
    
    int n; 
    int i = 0;
    printf("Enter number of temperatures:\n");
    scanf("%d", &n);
   
    double tempC[n], sum, fahr, avg;
    printf("Enter %d temperatures:\n", n);

//stores values of temps in array tempC[] 
    for (i = 0; i < n; i++){
        scanf("%lf", &tempC[i]);
    }

//used switch to compare character entered with 's', 'p', 't'

    switch (c){
        case 's' : 
        sum = 0;
        for(i = 0; i <= (n  - 1); i++){
            sum += tempC[i];
        }
        printf("The sum of the temperatures is: %.3f°C\n", sum);
        break; 

        case 'p' :
        printf("\nList of Temperatures (Celsius)\n\n");
        for(i = 0; i < n; i++){
            printf("%6.3lf °C\n", tempC[i]);
        }
        break;
        
        case 't' :
        printf("\nList of Temperatures (Fahrenheit)\n\n");
        for(i = 0; i < n; i++){
            fahr = ((9 * tempC[i]/ 5) + 32);
            printf("%6.3lf °F\n", fahr);
        }
        break;

        default :
        sum = 0;
        for(i = 0; i <= (n  - 1); i++){
            sum += tempC[i];
        }
        avg = (sum / n);
        printf("The average of the temperatures is: %.3lf°C\n", avg);
    }
    return 0;
}