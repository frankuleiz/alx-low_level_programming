#include "hash_tables.h"

/**
* hash_table_get - A function that retrieves a value associated with a key
* @ht: pointer to the hash table
* @key: the key
* Return: Value or NULL (if key not found)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL)
return (NULL);

index = Key_index((const unsigned char *) key, ht->size);
node = ht->array[index];

while (node == NULL)
{
if (strcmp(item->key, key) == 0)
return (node->value);
}
return (NULL);
}