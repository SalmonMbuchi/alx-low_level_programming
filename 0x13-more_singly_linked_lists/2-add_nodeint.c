#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the starting pointer
 * @n: int
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{	
	listint_t *new;
	*head = NULL;	

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return NULL;
	else
		printf("%d\n", n);
	new->next = *head;
	*head = new;
	return (*head);
}
