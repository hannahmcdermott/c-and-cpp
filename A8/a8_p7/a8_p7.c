 /*
 CH-230-A
 a8_p7.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double one, two;
    
    FILE *file1;
    char f1name[100];
    printf("Enter filename of first file: ");
    
    //user inputs name of first file
    fgets(f1name, sizeof(f1name), stdin);
    //cancels the '\n' scanned by fgets 
    f1name[strlen(f1name)-1] = '\0';
    
    //opens first file to read 
    file1 = fopen(f1name, "r");
    
    //checks if action was successful 
    if(file1 == NULL)
    {
        puts("cannot open file\n");
        exit(1);
    }   
    
    //because only 1 double in file scans until EOF
    while (!feof(file1))
    {
        fscanf(file1, "%lf", &one);
    }
    
    //closes first file 
    fclose(file1);
    
    FILE *file2;
    char f2name[100];
    printf("Enter filename of second file: ");
    
    //user inputs name of second file
    fgets(f2name, sizeof(f2name), stdin);
    //cancels the '\n' that fgets scans
    f2name[strlen(f2name)-1] = '\0';
   
    //opens second file to read
    file2 = fopen(f2name, "r"); 
    
    //checks if action is successful
    if (file2 == NULL)
    {
        puts("cannot open file\n");
        exit(1);
    }

    //because only 1 double in file, reads until EOF
    while (!feof(file2))
    {
        fscanf(file2, "%lf", &two);
    }
    
    //closes second file 
    fclose(file2);

    double sum = one + two;
    double diff = one - two;
    double prod = one * two;
    double div = one/two;

    printf("Computing results...\n");
    printf("Results are in file: results.txt\n ");
    
    FILE *file3;
    //creates file results.txt 
    file3 = fopen("results.txt", "w");
    
    //checks if action was successful 
    if(file3 == NULL)
    {
        puts("cannot create file\n");
        exit(1);
    }   

    fprintf(file3, "%lf + %lf = %lf\n", one, two, sum);
    fprintf(file3, "%lf - %lf = %lf\n", one, two, diff);
    fprintf(file3, "%lf * %lf = %lf\n", one, two, prod);
    fprintf(file3, "%lf / %lf = %lf\n", one, two, div);
    
    //closes file results.txt 
    fclose(file3);
    
    return 0;
}
    
