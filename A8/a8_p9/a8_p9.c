 /*
 CH-230-A
 a8_p9.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1;
    char f1name[100];
    printf("Enter filename: ");
    
    //user inputs name of file
    fgets(f1name, 100, stdin);
    //cancles the '\n' that fgets scans 
    f1name[strlen(f1name)-1] = '\0';
    
    //checks if opening file was successful
    file1 = fopen(f1name, "r");
    if (file1 == NULL)
    {
        puts("cannot open file!\n");
        exit(1);
    }
 
    //declares count variable for counting words
    int count = 0; 
    printf("Counting number of words...\n");
    
    //endless while loop for counting words
    while (1)
    {
        //declares string for scanning words from files
        char current[40];
        fscanf(file1, "%s", current);
        
        //if EOF reached, breaks out of loop
        if (feof(file1))
        {
            break;
        }

        //no other conditions because fscanf skips all whitespaces
        
        //increments count variable 
        count++;
    }

    printf("The file contains %d words.\n", count);
    
    //closes file 
    fclose(file1);
    return 0;
}