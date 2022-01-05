 /*
 CH-230-A
 a6_p8.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

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
struct list* push_back(struct list *list, int value){
    struct list *cursor, *newel;
    cursor = list;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL){
        printf("Error allocating memory\n");
        return list;
    }
    newel->info = value;
    newel->next = NULL;
    if (list == NULL){
        return newel;
    }
    //moves cursor to end of list 
    while (cursor->next != NULL){
        cursor = cursor->next;
    }
    cursor->next = newel;
    return list;
} 

//inserts a new int at the beginning of the list 
//list = list where element should be inserted
//value = int to be inserted 
//returns the updated list 
struct list* push_front(struct list *list, int value){
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL){
        printf("Error allocating memory\n");
        return list;
    }
    newel->info = value;
    newel->next = list;
    return newel;
}

//removes first element of the list 
//list = list where first element will be removed
//returns the updated list 
struct list* remove_first(struct list *list){
    /* needs to cover the case if the list is empty
    and function is called */
    if(list == NULL){
        return list;
    }
    struct list *remove;    
    remove = list;
    list = list->next;
    free(remove);
    return list;
}

//prints all elements of list; print_list is called with 
//the address of the first element in the list 
void print_list(struct list *list){
    struct list *p;
    for (p = list; p != NULL; p = p->next){
        printf("%d ", p->info);
    }
    printf("\n");
}

//frees memory used by list 
void dispose_list(struct list *list){
    struct list *nextelem;
    while (list != NULL){
        nextelem = list->next;
        free(list);
        list = nextelem;
    }
}

int main(){
    struct list *list = NULL;
    
    
    while(1){
        char ch; 
        scanf("%c", &ch);
        
        //declares variable that is required for 'a' and 'b' options
        int n;

        //uses switch to compare input character with either a, b, 
        //r, p, or q

        switch (ch){
            case 'a' :
            scanf("%d", &n);
            list = push_back(list, n);
            break;

            case 'b' :
            scanf("%d", &n);
            list = push_front(list, n);
            break;

            case 'r' :
            list = remove_first(list);
            break;

            case 'p' :
            print_list(list);
            break;

            case 'q' :
            dispose_list(list); 
            //terminates program
            exit(0);
            break;
        }
    }
    return 0;
}