#include "lists.h"

/**
 * dlistint_len - adds a node at the start of a list
 * @h: pointer to the beginning of a list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
