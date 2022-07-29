#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index of the key/value pair in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int index;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		exit(EXIT_FAILURE);
	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
		exit(EXIT_FAILURE);
	index = hash_djb2(key) % size;
	return (index);
}
