#include "lists.h"
/**
  * listint_len - returns the number of elements
  * @h: pointer to a singly list
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
