 /*
 CH-230-A
 a6_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>

int main(){
    //reads character from keyboard 
    unsigned char c;
    scanf("%c", &c);
    getchar();
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");
    
    //uses a mask 1 and moves the data to the right 
    //each digit it is done with is shifted to the right
    //loops around until c data is not 00000
    while (c != 0){
        printf("%d", c & 1);
        //this shifts out 1 digit from the back 
        c = c >> 1;
    }
    printf("\n");
    return 0;

}