#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash tabel.
 * @ht: the hash table.
 * @key: the key.
 * @value: the value.
 *
 * Return: 1 on success, 0 on failure.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *target, *new_node;
	char *value_dup, *key_dup;

	if (!key || !key[0] || !ht || !ht->array || ht->size == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	target = ht->array[idx];
	value_dup = strdup(value);
	if (!value_dup)
		return (0);
	while (target)
	{
		if (strcmp(target->key, key) == 0)
		{
			free(target->value);
			target->value = value_dup;
			return (1);
		}
		target = target->next;
	}
	key_dup = strdup(key);
	if (!key_dup)
	{
		free(value_dup);
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(key_dup);
		free(value_dup);
		return (0);
	}
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
