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
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)/*obsessively check if head is NULL*/
		return (NULL);	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	ptr = *head;
	node = *head;
	while (node != NULL)
	{
		if (i == idx)
		{
			new->next = node;
			ptr->next = new;
			return (new);
		}
		ptr = node;
		node = node->next;
		i++;
	}
	if (idx == i)
	{
		ptr->next = new;
		return (new);
	}
	free(new);
	return (new);
}
