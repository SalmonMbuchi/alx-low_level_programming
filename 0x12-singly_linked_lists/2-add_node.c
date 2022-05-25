#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the added node
 * @str: string to be passed into the function
 * Return: pointer to list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *string;
	int len;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		len = 0;
	}
	else
	{
		string = strdup(str);
		len = strlen(str);
	}
	newNode->len = len;
	newNode->str = string;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
