#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0, j = 0;

	i = hash_djb2(key);
	j = i % size;
	return (j);
}
