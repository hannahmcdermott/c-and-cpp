 /*
 CH-230-A
 a7_p6.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//defines struct person
struct person{
    char name[30];
    int age;
};

//arr[] = array of 'struct peron' whose values are being sorted 
//n = number of elements in array arr[]
//comp = function pointer to function that takes two arguments: 
//struct person, struct person
void bubblesort(struct person arr[], int n, int (*comp)(struct person, struct person)){
    //swapped = bool variable that is assigned true at 
    //the beginning to enter while loop
    bool swapped = true;
    //while swapped remains true
    while (swapped){
        //swapped now false to enter while loop only once 
        swapped = false; 
        //i has to start at 1 so that arr[i-1] = arr[0]
        //iterates through arr[]
        for (int i = 1; i < n; i++){
            //through every iteration calls function comp
            //if comp funciton returns < 0, then elements 
            //being compared already in ascending order
            if (comp(arr[i-1], arr[i]) > 0){
                //swaps ages if (depending on funciton being called) 
                //ages/names are in descending order 
                int swap_age;
                swap_age = arr[i-1].age;
                arr[i-1].age = arr[i].age;
                arr[i].age = swap_age;
                //swaps names 
                char swap_name[30];
                strcpy(swap_name, arr[i-1].name);
                strcpy(arr[i-1].name, arr[i].name);
                strcpy(arr[i].name, swap_name);
                swapped = true; 
            }
        }
    }
}

//returns pos. or neg. value 
int compare_name(struct person a, struct person b){
    //strcmp returns 0 if both strings are identical
    if (strcmp(a.name, b.name) == 0){
        //in this case it will return the difference of the ages
        return a.age - b.age;
    }
    else {
        //strcmp returns neg. if ASCII value of first unmatched character is < second 
        //return pos. int if ASCII value of first unmatched character is > second 
        return strcmp(a.name, b.name);
    }
}

//returns pos. or neg. value 
int compare_age(struct person a, struct person b){
    //if ages are the same, sorts persons according to their names 
    if (a.age == b.age){
        //returns value of strcmp
        return strcmp(a.name,b.name);
    }
    else {
        //return the difference of the ages 
        return a.age - b.age;
    }
}

int main(){
    //scans number of persons
    int n;
    scanf("%d", &n);
    //defines array of type struct person with n elements
    struct person persons[n];
    //scans names and ages of persons in array persons[n]
    for(int i = 0; i < n; i++){
        //names have no spaces so scanf works well 
        scanf("%s", persons[i].name);
        getchar(); 
        scanf("%d", &persons[i].age);
    }
    
    //calls bubblesort with function compare_name
    //the list is sorted in ascending order with respect to their name
    //(alphabetical order)
    bubblesort(persons, n, compare_name);
    //prints sorted list 
    for(int i = 0; i < n; i++){
        printf("{%s, %d}; ", persons[i].name, persons[i].age);
    }
    printf("\n");
    
    //calls bubblesort with function compare_age
    //the list is sorted in ascending order with respect to their age 
    
    bubblesort(persons, n, compare_age);
    //prints sorted list 
    for(int i = 0; i < n; i++){
    printf("{%s, %d}; ", persons[i].name, persons[i].age);
    }
    printf("\n");
    
    return 0; 
}