 /*
 CH-230-A
 a8_p11.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    printf("Enter number of files to concatenate: ");
    scanf("%d", &n);
    getchar();
    printf("Concating the content of following %d files...\n", n);

    //declares file pointer to output file 
    FILE *fileo; 
    
    //opens for writing and reading in binary  
    fileo = fopen("output.txt", "wb+");
   
    //checks if creating/opening file was successful
    if (fileo == NULL)
    {
        puts("cannot create file!:(\n");
    }
    
    //for loop to scan names of n files plus content 
    for (int i = 0; i < n; i++)
    {
        //declares file pointer 
        FILE *filen;
        char fnname[100];

        //User enters filename
        fgets(fnname, 100, stdin);
        fnname[strlen(fnname)-1] = '\0';

        //opens for reading in binary mode 
        filen = fopen(fnname, "rb");
        
        if (filen == NULL)
        {
            puts("cannot open file!\n");
            exit(1);
        }
        
        char buffer[64];
        //fread returns the number of chunks read 
        int i = fread(buffer, 1, 64, filen);  
        fwrite(buffer, i, 1, fileo);
        
        //closes file 
        fclose(filen);

    }

    fseek(fileo, 0, SEEK_SET);
    printf("The result is:\n\n");
    char a; 
    while ((a = fgetc(fileo)) != EOF)
    {
        //file content printed to standard output
        putchar(a);
    }

    fclose(fileo);
    printf("The result was written into output.txt\n\n");

}