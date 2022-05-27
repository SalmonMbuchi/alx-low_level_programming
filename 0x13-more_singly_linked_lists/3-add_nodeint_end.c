#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the starting pointer
 * @n: int
 * Return: address of thr new element or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;	
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;   /*temp will now pont to the starting pointer*/	
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;	
	return (new);
}
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    return (0);
}
