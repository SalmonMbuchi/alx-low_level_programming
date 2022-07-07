#include "lists.h"
/**
 * dlistint_len - returns the no. of elements in a list
 * @h: pointer to the head node
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t count = 0;

	head = h;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}
