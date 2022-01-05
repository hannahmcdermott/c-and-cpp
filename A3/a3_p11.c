 /*
 CH-230-A
 a3_p11.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int main(){
    //Enter two strings
    char one[100];
    fgets(one, sizeof(one), stdin);
    one[strlen(one) - 1] = '\0';
    char two[100]; 
    fgets(two, sizeof(two), stdin);
    two[strlen(two) - 1] = '\0';
    char c;
    scanf("%c", &c);
    getchar();
    //copying string one for later comparison
    char four[100];
    strcpy(four, one);

    //Print lengths using string.h function 'strlen' 
    int length1, length2;
    length1 = strlen(one);
    length2 = strlen(two);
    printf("length1=%d\n", length1);
    printf("length2=%d\n", length2);

    //Print concatentation using string.h function 'strcat'
    printf("concatenation=%s\n", strcat(one,two));

    //Copies string two into string three using strcpy
    char three[100];
    strcpy(three, two); 
    printf("copy=%s\n", three);
    
    /* Uses strcmp to compar string four (copy of 
    one) and two */
    int r = (strcmp(four, two));

    if(r < 0){
        printf("one is smaller than two\n");
    }
    if(r == 0){
        printf("one is equal to two\n");
    } 
    if(r > 0){
        printf("one is larger than two\n");
    }

    /* uses function strch to print position of 
    character c in string two */
    char *p = (strchr(two, c));
    if(p == NULL){
        printf("The character is not in the string\n");
    }
    else {
        printf("position=%ld\n", p-two);
    }    
    return 0;
}