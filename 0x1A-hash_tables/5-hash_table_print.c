#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the table to print.
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = -1;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			if (flag == 1)
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);

			tmp = tmp->next;
			flag = 1;
		}
	}
	printf("}\n");
}
