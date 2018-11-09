#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int pop_front(list* l, int* DeletedNumber)
	{
	if(l->head->next == NULL)
	{
		return -1;
	}
	nodeS* currptr = l->head;
	l->head=l->head->next;
	*DeletedNumber=currptr->data;
	printf("Deleted Number is: %d\n", *DeletedNumber);
	free(currptr);
	currptr=NULL;
	return 0;
	}

int push(list* l, int data1)
{
  printf("Pushing %d\n", data1);
	if (l->head == NULL)
	{
		l->head =(nodeS*) malloc(sizeof(nodeS));
		l->head->data=data1;
		l->head->next=NULL;
		return 0;
	}
		/* PRZESZUKIWANIE LISTY */
		nodeS* currptr = l->head;
		while (currptr->next != NULL)
		{
			currptr = currptr->next;
		}
		currptr->next =(nodeS*) malloc(sizeof(nodeS));
		currptr=currptr->next;
		currptr->next=NULL;
		currptr->data=data1;
		return 0;
}

void print_all(list* l)
{
  printf("Printing list: ");
	nodeS* currptr = l -> head;
	while (currptr != NULL)
	{
		printf("%d ", currptr->data);
		currptr = currptr->next;
	}
  printf("\n");
}

int pop_back(list* l, int* DeletedNumber)
{
	nodeS* prevptr = l->head;
	nodeS* currptr = l->head->next;

	if(currptr->next == NULL)
	{
		return -1;
	}
	while (currptr->next != NULL)
	{
		currptr=currptr->next;
		prevptr=prevptr->next;
	}
	if (currptr->next == NULL)
	{
		*DeletedNumber=currptr->data;
		printf("DeletedNumber is %d\n", *DeletedNumber);
		free(currptr);
		prevptr->next=NULL;
	}
	return 0;
}
void clear_all(list* l)
{
	nodeS* currptr=l->head;
	while (l->head != NULL)
	{
		currptr = l->head->next;
		free(l->head);
		l->head = NULL;
		l->head = currptr;
	}
	printf("Cleared\n");
}



