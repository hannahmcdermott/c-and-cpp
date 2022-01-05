 /*
 CH-230-A
 a8_p6.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fp;
    //opens file chars.txt to read 
    fp = fopen("chars.txt", "r");

    //checks if action was successful
    if (fp == NULL)
    {
        puts("cannot open file\n");
        exit(1);
    }
    
    printf("Reading first two characters from file chars.txt\n");

    //returns first two characters 
    char a = getc(fp); 
    char b = getc(fp);
    
    //gets ASCII value of both characters
    int aascii = a;
    int bascii = b;
    int sum = aascii + bascii; 
    
    //closes file chars.txt
    fclose(fp);

    //creates file codesum.txt 
    FILE *fp2;
    fp2 = fopen("codesum.txt", "w");
    
    //checks if action was successful     
    if (fp2 == NULL)
    {
        puts("cannot create file\n");
        exit(1);
    }
    
    //prints to file codesum.txt the sum of the ascii values 
    fprintf(fp2, "%d", sum); 
    printf("The result of '%c' + '%c' was written into codesum.txt\n", a, b);
    
    //closes file codesum.txt 
    fclose(fp2);
    return 0;
}