#include "lista.h"

void pop_front(list* l)
	{
	nodeS* currptr = l->head;
	l->head=l->head->next;
	free(currptr);
	currptr=NULL;
	}

int push(list* l, int data1) //
{
  printf("Pushing %d\n",data1);
	if(l->head == NULL)
	{
		l->head = malloc(sizeof(nodeS));
		l->head->data=data1;
		l->head->next=NULL;
		return 0;
	}
		/* PRZESZUKIWANIE LISTY */
		nodeS* currptr = l->head;
		while(currptr->next != NULL)
		{
			currptr = currptr->next;
		}
		currptr->next = malloc(sizeof(nodeS));
		currptr=currptr->next;
		currptr->next=NULL;
		currptr->data=data1;
		return 0;
}

void print_all(list* l)
{
  printf("Printing list: ");
	nodeS* currptr = l -> head;
	while(currptr != NULL)
	{
		printf("%d ", currptr->data);
		currptr = currptr->next;
	}
  printf("\n");
}

void pop_back(list* l)
{
	nodeS* prevptr = l->head;
	nodeS* currptr = l->head->next;

	while(currptr!=NULL)
	{
		currptr=currptr->next;
		prevptr=prevptr->next;
	}
	if(currptr == NULL)
	{
		free(prevptr);
		prevptr->next=NULL;
		currptr->next=NULL;
	}
}
