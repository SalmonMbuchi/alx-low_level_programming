#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the head node
 * Return: no. of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t count = 0;

	head = h;
	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
