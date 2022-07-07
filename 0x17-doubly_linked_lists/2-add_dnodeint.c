#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: pointer to the head node
 * @n: int
 * Return: pointer to the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
