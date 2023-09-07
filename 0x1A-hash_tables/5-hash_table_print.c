#include "hash_tables.h"
/**
* hash_table_print - A function that prints a hash table
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{

hash_node_t *node;
unsigned long int i;
short int comma = 0;

if (ht == NULL)
return;

putchar('{');

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (comma)
printf(", ");

printf("'%s': '%s'", node->key, node->value);
node = node->next;

if (comma == 0)
comma = 1;
}
}
printf("}\n");
}
