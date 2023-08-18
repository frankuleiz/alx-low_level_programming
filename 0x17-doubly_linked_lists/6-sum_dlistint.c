#include "lists.h"

/**
 *  sum_dlistint - sums up all the data
 *  @head: pointer
 *  Return: dlistint_t or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
