#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *init;

	init = malloc(sizeof(hash_table_t));
	if (init == NULL)
	{
		return (NULL);
	}
	init->size = size;
	init->array = malloc(sizeof(hash_node_t *) * size);
	if (init->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		init->array[i] = NULL;
	}
	return (init);
}
