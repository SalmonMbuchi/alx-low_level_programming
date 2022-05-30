#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer pointing the head node
 * @idx: index of the list
 * @n: int
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (n == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;
	for (i = 0; i < idx - 1; i++)
		ptr = ptr->next;
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
