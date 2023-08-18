#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: pointer to a pointer
 * @index: indext of type int
 * Return: 1or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	if (!current)
	{
		return (-1);
	}
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	if (current->prev)
	{
		current->prev->next = current->next;
	}
	free(current);
	return (1);
}
