#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 * @h: pointer to the start of the link list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t i;
    for (i = 0, h!= NULL; i++)
    {
        printf("%d\n", h->n);
    }
    return (i);
}
