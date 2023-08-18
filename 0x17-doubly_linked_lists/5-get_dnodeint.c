#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at a given index
 * @head: pointer
 * @index: index of type int
 * Return: index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
