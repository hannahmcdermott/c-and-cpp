/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	//if queue is full, does not do anything
    if (queue_is_full(pq))
    {
        return -1;
    }

    else 
    {
        //creates new node 
        Node *new_node;
        new_node = (Node *) malloc(sizeof(Node));
        
        if (new_node == NULL) 
        {
            printf("Error allocating memory\n");
            return -1;
        }
        
        //copies item to the new node 
        new_node->item = item;
        //sets next pointer to NULL
        new_node->next = NULL;
        
        //if queue was empty sets front node
        if (queue_is_empty(pq))
        {
            pq->front = new_node;
        }  
        else
        {
            /*if queue already exists, sets current 
            rear node's next pointer to new node */
            pq->rear->next = new_node;
        }
        
        //Sets rear pointer to new node
        pq->rear = new_node;
        //adds 1 item to 'count' variable
        pq->items++;
    }
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	//if queue is empty does not do anything 
    if (queue_is_empty(pq))
    {
        return -1;
    }
   
    else
    {
        //copies address of item to waiting variable
        *pitem = pq->front->item;
        
        //temporary node that points to front node
        Node *tmp = pq->front;
        
        //resets front pointer to next item in queue
        pq->front = pq->front->next;  
        
        //frees memory
        free(tmp);
        
        //resets front and rear pointers to NULL
        if (queue_is_empty(pq))
        {
            pq->front = pq->rear = NULL;
        }  
        
        //decrements item count 
        pq->items--;
    }    
    return 0;   
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq)
{
    Node *current;
    printf("content of the queue: ");
    for (current = pq->front; current != NULL; current = current->next)
    {
        printf("%d ", current->item);
    }
    printf("\n");
}