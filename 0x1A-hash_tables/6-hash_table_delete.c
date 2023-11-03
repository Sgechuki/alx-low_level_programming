#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *to_del = NULL;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp)
		{
			to_del = temp;
			free(to_del->key);
			free(to_del->value);
			temp = temp->next;
			free(to_del);
		}
	}
	free(ht->array);
	free(ht);
}
