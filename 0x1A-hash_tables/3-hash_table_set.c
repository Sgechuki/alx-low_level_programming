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
	unsigned long int idx = 0;
	hash_node_t *record = NULL, *temp = NULL;

	if (!ht || !key || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	record = malloc(sizeof(hash_node_t));
	if (record == NULL)
	{
		return (0);
	}
	record->key = strdup(key);
	record->value = strdup(value);
	record->next = NULL;
	if (ht->array[idx])
	{
		temp = ht->array[idx];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(record->key);
				free(record->value);
				free(record);
				return (1);
			}
			temp = temp->next;
		}
		record->next = ht->array[idx];
		ht->array[idx] = record;
		return (1);
	}
	else if (!ht->array[idx])
	{
		ht->array[idx] = record;
		return (1);
	}
	return (0);
}
