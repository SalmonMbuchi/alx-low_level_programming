#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to a pointer to head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int v = 0;

	temp = *head;
	if (*head == NULL)
		return (0);
	*head = temp->next;
	v = temp->n;
	free(temp);
	return (v);
}
