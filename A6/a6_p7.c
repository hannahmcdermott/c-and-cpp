 /*
 CH-230-A
 a6_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
//c = character whose binary representation will be changed 
//bit1, bit2, bit3 = positions of nth bit that will be set 
unsigned char set3bits(unsigned char c, int bit1, int bit2, int bit3){
    c = ((1 << bit1) | (int)c); 
    c = ((1 << bit2) | (int)c);
    c = ((1 << bit3) | (int)c);
    return c;
}

int main(){
    //reads character from keyboard
    unsigned char c;
    scanf("%c", &c);
    //getchar() not necessary since it reads numbers after
    //reads positions of bits to be set 
    int bit1, bit2, bit3;
    scanf("%d", &bit1);
    scanf("%d", &bit2);
    scanf("%d", &bit3); 
    
    printf("The decimal representation is: %d\n", c);
    
    //prints normal binary representation 
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (((int) c >> i) & 1));
    }
    printf("\n");
    
    //calls function to set 3 bits 
    c = set3bits(c, bit1, bit2, bit3);
    printf("After setting the bits: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (((int) c >> i) & 1));
    }
    printf("\n");
    return 0;
}
