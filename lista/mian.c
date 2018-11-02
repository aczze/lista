#include "lista.h"
#include "criterion.h"
#include <stdio.h>
//lol

int main(void)
{
	list* l = malloc(sizeof(*l)); //Rezerwuje komorke pamieci dla struktury o zmiennej 'list' ktora jest wielkosci '*l'
	l->head = NULL;
	push(l, 1);
	push(l, 2);
	push(l, 3);

	printf("\nAby usunac pierwszy element kliknij: '1'\nAby usunac ostatni element kliknij: '2'\n\n");

	pop_front(l);
	print_all(l);
	return 0;

}


