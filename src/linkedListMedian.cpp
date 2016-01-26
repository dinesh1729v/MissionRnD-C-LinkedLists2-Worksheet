/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head == NULL)return -1;
	int count = 1,flag=1,count2;
	struct node *tempHead = head;
	while (head->next != NULL)
	{
		head = head->next;
		count++;
	}
	count2 = count % 2 ? (count / 2) : (count / 2) - 1;
	while (count2--)
		tempHead=tempHead->next;
	if (count%2)
		return tempHead->num;
	return ((tempHead->num + tempHead->next->num) / 2);
}
