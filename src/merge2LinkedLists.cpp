/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *h1, struct node *h2) {
	struct node *res = NULL;
	if (h1 == NULL)return h2;
	if (h2 == NULL)return h1;
	if (h1->num < h2->num)
	{
		res = h1;
		res->next = merge2LinkedLists(h1->next, h2);
	}
	else
	{
		res = h2;
		res->next = merge2LinkedLists(h1, h2->next);
	}
	return res;
}
