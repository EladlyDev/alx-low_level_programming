#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a hash list.
 * @head: the head of the list.
 **/
void free_list(hash_node_t *head)
{
	hash_node_t *tmp = head;

	if (!head)
		return;

	while (tmp)
	{
		head = head->next;
		free(tmp->key);
		if (tmp->value)
			free(tmp->value);
		free(tmp);
		tmp = head;
	}
}
