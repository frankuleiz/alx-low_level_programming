#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: pointer to a node
  * @index: the index of the node
  * Return: 1 or -1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	ptr = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	next = ptr->next;
	ptr->next = next->next;
	free(next);
	return (1);

}

