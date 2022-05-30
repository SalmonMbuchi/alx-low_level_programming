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

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	free(temp);
	return (temp->n);
}
