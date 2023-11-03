#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table.
 * @key: the key.
 *
 * Return: the value associated with the @key, or NULL if it couldn't be found.
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	if (!key || !ht || ht->size == 0 || !ht->array || !key[0])
		return (NULL);

	tmp = ht->array[key_index((unsigned char *)key, ht->size)];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
