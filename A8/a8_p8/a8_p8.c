 /*
 CH-230-A
 a8_p8.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1;
    //opens file text1.txt to read 
    file1 = fopen("text1.txt", "r");

    //checks for success
    if (file1 == NULL)
    {
        puts("cannot open file\n");
        exit(1);
    }
    
    FILE *file2;
    //open file text2.txt to read
    file2 = fopen("text2.txt", "r");

    //checks for success
    if (file2 == NULL)
    {
        puts("cannot open file\n");
        exit(1);
    }

    FILE *file3;
    //creates file merge12.txt
    file3 = fopen("merge12.txt", "w");
    
    //checks if creating file was successful
    if (file3 == NULL)
    {
        puts("cannot create file\n");
        exit(1);
    }
    
    char a;

    //gets character from first file and puts it in merge12.txt until EOF
    while ((a = fgetc(file1)) != EOF)
    {
        fputc(a, file3);
    }
    
    //gets character form second file and puts it n merge12.txt until EOF
    while ((a = fgetc(file2)) != EOF)
    {
        fputc(a, file3);
    }

    printf("Merging text1.txt and text2.txt\n");
    printf("Merged in file merge12.txt\n");
    
    //closes all files 
    fclose(file1);
    fclose(file2);
    fclose(file3);
    
    return 0;
}