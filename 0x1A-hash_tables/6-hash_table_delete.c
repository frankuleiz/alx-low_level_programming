#include "hash_tables.h"
/**
* hash_table_delete - A function that deletes a hash table
* @ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
free_hash_list(node);
}
free(ht->array);
free(ht);
}
/**
* free_hash_list - A function that frees a hash_node_list
* @head: a pointer to the head linked list
*/
void free_hash_list(hash_node_t *head)
{
hash_node_t *current;
hash_node_t *next;

current = head;

while (current != NULL)
{
next = current->next;
free(current->key);
free(current->value);
free(current);
current = next;

}
}
