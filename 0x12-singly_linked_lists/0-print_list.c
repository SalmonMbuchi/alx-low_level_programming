#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head node
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t  n = 0;

	while (h != NULL)  /*while we haven't reached the end of the list*/
	{
		n++;
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;  /*go to the address of the next node*/
	}
	return (n);
}
