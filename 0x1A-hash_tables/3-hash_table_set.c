#include "hash_tables.h"
/**
* hash_table_set - A function that adds an element to the hash table
* @ht: the hash table
* @key: the key
* @value: the value of the key
* Return: 1 (success) or 1 (failure)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
hash_node_t *new_node;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
new_node = create_new_node(key, value);
if (new_node == NULL)
return (0);

ht->array[index] = new_node;
return (1);
}
/*Checking if the key exists and replace the value*/
while (node != NULL)
{
if (strcmp(key, node->key) == 0)
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}
/*if the key does not exist, create a new key*/
new_node = create_new_node(key, value);
if (new_node == NULL)
return (0);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
/**
* create_new_node - a function that creates a new node
* @key: the key
* @value: the value of the key
* Return: 1 (success) or 0 (failure)
*/

hash_node_t *create_new_node (const char *key, const char *value)
{
hash_node_t *new_node;
new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
return (NULL);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

return (new_node);
}
