#include "lists.h"
/**
  * list_len - number of elements
  * @h: pointer ro a string
  * Return: number of elements in a node
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
