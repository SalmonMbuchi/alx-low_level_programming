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
    free_listint(head);
    head = NULL;
    return (0);
}
