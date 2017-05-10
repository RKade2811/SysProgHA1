#include "PrioQueue.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct q_elem_s
{
	char* name;
	int priority;
	struct q_elem_s *next;
};

struct PrioQueue
{
	int size;
	q_elem *root;
};

PrioQueue* pqueue_new()
{
	//TODO

	PrioQueue *queue = malloc(sizeof(queue));
	queue->size = 0;
	queue->root = NULL;
	
	return queue;
}

q_elem* q_elem_new(int priority, char* name)
{
	q_elem *element = malloc(sizeof(element));
	element->name = name;
	element->priority = priority;

	//TODO
	return element;
}

void pqueue_free(PrioQueue *queue)
{
	//TODO
}

char* pqueue_offer(PrioQueue *queue, q_elem* newElem)
{
	q_elem *p = malloc(sizeof(p));
	p->next = newElem
	newElem->next = queue->root;

	while newElem->next != NULL && newElem->priority < newElem->next->priority{
		newElem->next = newElem->next->next;
	}
	//TODO
	return NULL;
}

char* pqueue_peek(PrioQueue *queue)
{
	//TODO
	return NULL;
}

char* pqueue_poll(PrioQueue *queue)
{
	//TODO
	return NULL;
}

int pqueue_size(PrioQueue *queue)
{
	//TODO
	return queue->size;
}

void pqueue_print(PrioQueue *queue)
{

/*	q_elem_s *p = queue->root;
	for(int i = 0; i < queue->size; i++){
		printf("(%d, %c)", p->priority, p->name);
		*p = p->next;

	}
*/	//TODO
}

