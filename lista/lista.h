#ifndef LISTA_H_
#define LISTA_H_

typedef struct nodeS {
	int data;
	struct nodeS* next; //ZMIENNA NEXT JEST WSKAZNIKIEM DO NODE'A. Nie kumam do konca tego zapisu
} nodeS;

typedef struct list {
	nodeS* head;
}list;

int push(list* l, int data1);
int print_all(list* l);
int pop_first(list* l, int* DeletedNumber);
int pop_last(list* l, int* DeletedNumber);
int clear_all(list* l);

#endif /* LISTA_H_ */
