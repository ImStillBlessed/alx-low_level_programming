#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created array, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	if (size == 0)
		return NULL;
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return NULL;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return NULL;
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return new_table;
}

