#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *init;

	init = malloc(size * sizeof(hash_table_t));
	if (init == NULL)
	{
		return (NULL);
	}
	return (init);
}
