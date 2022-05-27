#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all of the data of a linked list
 * @head: starting pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *new;
	int n;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	new = head;
	n = 0;
	while (new != NULL)
	{
		n += new->n;
		new = new->next;
	}
	return (n);
}
