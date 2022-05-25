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
	unsigned int n = 0; /*will store the return value and must be set to zero incase h == NULL*/

	h = malloc(sizeof(list_t));  /*allocate some space in memory for list_t* and store the address in h*/

	while (h != NULL)  /*while we haven't reached the end of the list*/
	{
		n++;
		if (h->str != NULL)
			printf("[%d] (%s)\n", h->len, h->str);				
		else
			printf("[0] (nil)\n");
		h = h->next;  /*go to the address of the next node*/
	}
	return (n);
}
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
