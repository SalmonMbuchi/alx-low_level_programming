#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head node
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n = n + 1;
		h = h->next;
	}
	return (n);
}
