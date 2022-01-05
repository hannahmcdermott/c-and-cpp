 /*
 CH-230-A
 a8_p10.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char f1name[100];
    printf("Enter filename: ");
    //user inputs file name 
    fgets(f1name, 100, stdin);
    
    //cancels the '\n' scanned by fgets 
    f1name[strlen(f1name)-1] = '\0';

    //defines character array to store input names
    char names[100][30];
    
    //initializes long array for storing the positions of the passwords
    long pos[100];
    
    //file pointer that points to file input from user 
    FILE *file1;
    file1 = fopen(f1name, "r");
    
    //initializes count variable that will be the index for the arrays 
    int count = 0;
    
    while (!feof(file1))
    {
        //starts scanning usernames in file 
        fscanf(file1, "%s", names[count]);
        
        //checks for end of file after next iteration's first read attempt 
        if (feof(file1)) break;

        //checking if fscanf scans '\n'
        //printf("%s*", names[count]);
        
        //initializes temporary string to store passwords 
        char temp[30];

        //assigns the positions of the start of every password to array pos
        pos[count] = ftell(file1);
        //printf("pos=%ld\n", pos[count]);
        fscanf(file1, "%s", temp);
        
        //checking for '\n'
        //printf("%s*", temp);
        
        count++;
    }
    
    //user inputs username and password as two separate strings in an endless loop 
    while(1) 
    {
        //initializes string for usernames 
        char name[30];
        
        //user enters username
        puts("Enter username: ");
        fgets(name, 30, stdin);
        
        //cancels the '\n' scanned by fgets 
        name[strlen(name)-1] = '\0';
        
        //program terminates if string entered is 'exit'
        if (strcmp(name, "exit") == 0)
        {
            break;
        }
        
        //initializes string for passwords 
        char password[30];
        
        //user enters password
        puts("Enter password: ");
        fgets(password, 30, stdin);
        
        //cancels the '\n' scanned by fgets 
        password[strlen(password)-1] = '\0';
        
        //initializes bool variable to print 'access to user denied' if case was that 
        //username entered was not in the file  
        bool namefound = false; 
        
        int i;
        for(i = 0; i < count; i++)
        {
            if (strcmp(name, names[i]) == 0)
            {
                //if name is found in file, bool variable namefound is true
                namefound = true; 
                
                //moves pointer to the position of where the password (that coincides with
                //the username found in the file) starts
                fseek(file1, pos[i], SEEK_SET);
                
                //initializes temporary array to store password from file  
                char currentpass[30];

                //scans password from file from where the pointer was moved 
                fscanf(file1, "%s", currentpass);
                
                //checks if password entered and password from file are the same 
                //prints corresponding message 
                if (strcmp(currentpass, password) == 0)
                {
                    printf("Access to user %s is granted.\n", names[i]);
                }

                //if not the same, prints corresponding message 
                else 
                {
                    printf("Access to user %s is denied.\n", names[i]);
                }
            }
        }
        //if username was not found at all, prints corresponding message 
        if(!namefound) //namefound == false => true 
        {
            printf("Access to user %s is denied\n", names[i]);
        }
    }

    //closes file 
    fclose(file1);
    return 0; 
}