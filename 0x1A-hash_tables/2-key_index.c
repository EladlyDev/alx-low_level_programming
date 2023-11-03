#include "hash_tables.h"

/**
 * key_index - gives the index of the key.
 * @key: the key to generate index for.
 * @size: the size of the hash table.
 *
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2(key) % size;

	return (index);
}
