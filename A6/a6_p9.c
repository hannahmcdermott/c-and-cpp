 /*
 CH-230-A
 a6_p9.c
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

//my_list = list where element will be inserted 
//int pos = position value
//int value = integer to be inserted 
struct list* insert(struct list *list, int pos, int value){
    int count = 0;

    for (struct list *p = list; p!= NULL; p = p->next){
        count++;
    }

    if ((pos < 0) || (pos > count)){
        printf("Invalid position!\n");
        return list;
    }

    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL){
        printf("Error allocating memory\n");
        return list;
    }

    newel->info = value;
    //covers the simple cases
    //push_front
    if (pos == 0){
        list = push_front(list, value);
        return list;
    }
    //if pos is after the end
    else if (pos == count) {
        list = push_back(list, value);
        return list;
    }
    //this is the case for inserting in the middle
    struct list *before = list;
    //'for' loop moves pointer pos-1 position ahead
    for (int i = 0; i < (pos - 1); i++){
        before = before->next;
    }
    struct list *after = before->next; 
    before->next = newel;
    newel->next = after;
    return list;

}

//Reverse function links elements from right to left 
struct list* reverse(struct list *list){
    struct list *reverse, *cursor, *next;
    //assigns cursor to list
    cursor = list;
    //initializes empty pointers 
    reverse = NULL;
    next = NULL;
    while (cursor != NULL){
        next = cursor->next;
        cursor->next = reverse;
        reverse = cursor;
        cursor = next;
    }
    list = reverse;
    //returns updated list
    return list;

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
    
    
    while (1){
        char ch; 
        int value, pos;
        scanf("%c", &ch);
    
        //uses switch to compare input character with either a, b, 
        //r, p, q, i, or R

        switch (ch){
            case 'a' :
            scanf("%d", &value);
            getchar();
            list = push_back(list, value);
            break;

            case 'b' :
            scanf("%d", &value);
            getchar();
            list = push_front(list, value);
            break;

            case 'r' :  
            list = remove_first(list);
            break;

            case 'p' :
            print_list(list);
            break;

            case 'q' :
            dispose_list(list); 
            exit(0);
            break;
            
            case 'i' :
            scanf("%d", &pos);
            scanf("%d", &value);
            getchar();
            list = insert(list, pos, value);
            break;

            case 'R' :
            list = reverse(list);
            break;
        }
    }
    return 0;
}
