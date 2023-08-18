#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all elements in a list
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
