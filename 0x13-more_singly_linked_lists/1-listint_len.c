#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the no. of elements in a linked list
 * @h: pointer of type listint_t(starting pointer)
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
