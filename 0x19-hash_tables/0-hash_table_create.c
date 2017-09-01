#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned int i = 0;

	if (size)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (new_table == NULL)
			return (NULL);

		new_table->size = size;
		new_table->array = malloc(sizeof(hash_node_t) * size);
		if (new_table->array == NULL)
			return (NULL);

		for (i = 0; i < size; i++) /*initilize array with NULL*/
			new_table->array[i] = NULL;
	}
	return (new_table);
}
