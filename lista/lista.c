 #include <stdio.h>
#include <stdlib.h>

typedef struct nodeS {
	int data;
	struct nodeS* next; //ZMIENNA NEXT JEST WSKAZNIKIEM DO NODE'A. Nie kumam do konca tego zapisu
} nodeS;

typedef struct list {
	nodeS* head;
}list;

int push(list* l, int data1);
void print_all(list* l);
void pop_front(list* l);
void pop_back(list* l);

void pop_front(list* l)
{
nodeS* currptr = l->head;
l->head=l->head->next;
free(currptr);
currptr=NULL;
}

int push(list* l, int data1) //
{
	//l->head=NULL;
  printf("Pushing %d\n",data1);
	if(l->head == NULL) //jesli  komorka head pokazuje nic, to...
	{
		l->head = malloc(sizeof(nodeS)); //Rezerwuj dla heada miejsce w pamieci na node'a//head = (typedef struct list *)malloc(sizeof(nodeS));
		l->head->data=data1; //Przypisujemy wartosc do data
		l->head->next=NULL; //Przypisuje do next NULLA. 'puszuje do konca'
		//l->head->data=data1=NULL;
		//free(l->head->next);
		return 0;
	}

		/* PRZESZUKIWANIE LISTY */
		nodeS* currptr = l->head; //kurrentpoitah wskazuje na jakies ...cos
		while(currptr->next != NULL) //Gdy to zamarze to, printuje mi normalnie. Warunek konca petli
		{
			currptr = currptr->next;
		}

		/* ALOKACJA NOWEGO NODE'A */
		//nodeS* newnode = malloc(sizeof(nodeS)); //pom = (t_elem *)malloc(sizeof(t_elem));
		//newnode->data=data1;
		//newnode->next=NULL;
		/* DOLACZENIE NOWEGO ELEMENTU DO LISTY */
		//currptr->next=newnode;
		/*alokacja node'a do nowego elementu*/
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
	while(currptr != NULL) //wykonuj dopoki currptr bedzie nullem
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

int main(void)
{
	list* l = malloc(sizeof(*l)); //Rezerwuje komorke pamieci dla struktury o zmiennej 'list' ktora jest wielkosci '*l'
	l->head = NULL;
	push(l, 1);
	push(l, 2);
	push(l, 3);

	printf("Kliknij '1' aby usunac pierwszy element listy./nAby usunac drugi element kliknij 2")

	pop_front(l);
	print_all(l);

	return 0;
}
