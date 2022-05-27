#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: starting ponter of type listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t n;
	
	n = 0;
	while(h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;	
	}
	return (n);
}
