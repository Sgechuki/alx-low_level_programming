#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value:  is the value associated with the key. value must
 * be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *record, *temp;

	if (!ht || !key)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	record = malloc(sizeof(hash_node_t *));
	if (record == NULL)
	{
		return (0);
	}
	record->key = (char *)key;
	record->value = strdup(value);
	record->next = NULL;
	if (ht->array[idx])
	{
		temp = ht->array[idx];
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = record;
	}
	else if (!ht->array[idx])
	{
		ht->array[idx] = record;
	}
	return (1);
}
