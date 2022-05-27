#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: starting pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp1;

	while (head != NULL)
	{
		temp1 = head;
		head = head->next;
		free(temp1);
	}
}
