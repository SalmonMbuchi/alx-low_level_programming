#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to head node
 * @n: int
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *temp;

	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	last->prev = *head;
	if (*head == NULL)	
		*head = last;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
	}
	return (last);
}
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
