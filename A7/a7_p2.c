 /*
 CH-230-A
 a7_p1.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */ 

#include <stdio.h>
#include <stdlib.h>

struct list{
    char data;
    struct list *next; //pointer to next element 
    struct list *prev; //pointer to previous element 
};

//inserts a new character at the beginning of doubly linked list
//list = list where new character will be inserted
//ch = new character that will be inserted 
//returns updated list
struct list* push_front(struct list *list, char ch){
    //alocates new element
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL){
        printf("Error allocating memory\n");
        return list;
    }
    //puts new character in data part of newel
    newel->data = ch;
    newel->next = list;
    //makes previous element of newel NULL
    newel->prev = NULL;
    if (list != NULL){
        //if list not empty, makes previous element of list newel 
        list->prev = newel;
    }
    return newel;
}

//removes all occurences of character 
//list = list where character will be removed
//ch = character that will be removed if currently in the list
//returns updated list 
struct list* delete_char(struct list *list, char ch){
    struct list *delete;
    int count = 0; 
    /*third part of for, where pointer has to move forward, moves 
    only if it did not delete, if it did delete, then the new delete
    has to be checked for the content as well */
    for (delete = list; delete != NULL;){
        if(delete->data == ch){
            count++;
            struct list *nextelem = delete->next;
            struct list *prevelem = delete->prev;
            struct list *todelete;
            
            //case if ch is first element of list 
            if (delete->prev == NULL){  
                //makes the previous element of next NULL
                nextelem->prev = NULL;
                //deletes character 
                todelete = delete;
                free(todelete);
                delete = nextelem;
                //updating list to point to the 'new' first element
                list = nextelem;
            }
             
            //case if ch is somewhere in the middle of the list 
            else if ((delete->prev != NULL) && (delete->next != NULL)){
                prevelem->next = nextelem;
                nextelem->prev = prevelem;
                todelete = delete;
                free(todelete);
                delete = nextelem;
            } 
            
            //case if ch is last element of list 
            else if (delete->next == NULL){
                //makes the element after prev NULL
                prevelem->next = NULL;
                //deletes character 
                todelete = delete;
                free(todelete);
                delete = prevelem;
            }
        }
        //case if nothing gets deleted, advance to next element
        else {
            delete = delete->next;
        }
    }
    //count will be zero if delete->data == ch was never true
    //this means that the character is not in the list 
    if (count == 0){
        printf("The element is not in the list!\n");
    }
    return list;
}

//prints doubly linked list
void print_list(struct list *list){
    struct list *p;
    //prints from the beginning
    for (p = list; p != NULL; p = p->next){
        printf("%c ", p->data);
    }
    printf("\n");
}

//prints doubly linked list backwards
void print_list_backwards(struct list *list){
    struct list *p = list;
    //brings pointer to the end of list 
    while (p->next != NULL){
        p = p->next;
    }
    //starts printing from the end
    while (p != NULL){
        printf("%c ", p->data);
        p = p->prev;
    }
    printf("\n");
}

//disposes list and frees memory
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
        int n;
        scanf("%d", &n);
        //initializes variable ch needed for cases 1 and 2 
        char ch;
        
        switch(n){
            case 1:
            getchar();
            scanf("%c", &ch);
            list = push_front(list, ch);
            break;

            case 2:
            getchar();
            scanf("%c", &ch);
            list = delete_char(list, ch);
            break;

            case 3:
            print_list(list);
            break;

            case 4:
            print_list_backwards(list);
            break;

            case 5:
            dispose_list(list);
            exit(1);
            break;
        }
    }
    return 0;
}



