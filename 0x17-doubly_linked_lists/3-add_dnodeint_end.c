#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to head node
 * @n: int
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *temp;

	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{	*head = last;
		last->prev = NULL;
		return (last);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
		last->prev = temp;
		return (last);
	}
}
