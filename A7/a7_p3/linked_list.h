 /*
 CH-230-A
 a7_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#pragma once
#include <stdio.h>
#include <stdlib.h>

struct list{
    int info;
    struct list *next;
}; 

//inserts a new int at the end of the list
//list = list where element should be inserted 
//value = int to be inserted 
//returns the updated list 
struct list* push_back(struct list *list, int value);

//inserts a new int at the beginning of the list 
//list = list where element should be inserted
//value = int to be inserted 
//returns the updated list 
struct list* push_front(struct list *list, int value);

//removes first element of the list 
//list = list where first element will be removed
//returns the updated list 
struct list* remove_first(struct list *list);

//prints all elements of list; print_list is called with 
//the address of the first element in the list 
void print_list(struct list *list);

//frees memory used by list 
void dispose_list(struct list *list);