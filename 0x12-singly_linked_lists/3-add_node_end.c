#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of  list_t list
 * @head: head of linked list
 * @str: string to be used as data for node
 * Return: number of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *string;
	int len;
	list_t *temp, *last;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	string = strdup(str);
	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	temp->str = string;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (*head);
}
