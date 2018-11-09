#include "lista.h"
#include "criterion.h"
#include <stdio.h>

Test(TestIfValRight, test2)
{
	printf("Checking Pop front...\n");
	int TestVal=3;
	list* l = malloc(sizeof(*l));
	l->head = NULL;
	push(l, TestVal);
	push(l, TestVal*2);
	push(l, TestVal);
	pop_front(l, &TestVal);//usuwanie ostatniego elementu

	cr_assert_eq(l->head->data, TestVal*2, "The Value of data is incorrect\nGoing to Test Pop back...\n"); //cr_assert_eq(Actual, Expected, [Message, [Args...]])
}
Test(abbabaa, testsda2)
{
	printf("Checking Pop back...\n");
	int TestVal=4;
	list* l = malloc(sizeof(*l));
	l->head = NULL;
	push(l, TestVal);
	push(l, TestVal*2);
	push(l, TestVal*5);
	pop_back(l, &TestVal);

	cr_assert_eq(l->head->data, TestVal, "Wartosc dejty jest nieprawidlowa"); //cr_assert_eq(Actual, Expected, [Message, [Args...]])
	cr_assert_not_null(l->head->data, "The data equals NULL");
	cr_assert_eq(l->head->data, TestVal, "The data was not deleted");
}
Test(munchmyquki, buggins)//Checking push
{
	int InitVal=1;
	printf("Checking initialization of Data...\n");
	list* l = malloc(sizeof(*l));
	l->head = NULL;
	cr_assert_null(l->head, "The data should equal NULL at the start");
	push(l, InitVal);
	push(l, InitVal*2);
	push(l, InitVal*3); //Sprawdzic czy funkcja push w ogole pushuje
}

