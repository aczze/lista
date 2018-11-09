/*
 * lista.h
 *
 *  Created on: Oct 31, 2018
 *      Author: marcin
 */
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
void print_all(list* l);
void pop_front(list* l);
void pop_back(list* l);
void clear_all(list* l);

#endif /* LISTA_H_ */
