#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ha_tb;
	unsigned long int i;

	ha_tb = malloc(sizeof(ha_tb_t));
	if (ha_tb == NULL)
		return (NULL);

	ha_tb->size = size;
	ha_tb->array = malloc(size * sizeof(hash_node_t *));
	if (ha_tb->array == NULL)
	{
		free(ha_tb);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ha_tb->array[i] = NULL;
	return (ha_tb);
}
