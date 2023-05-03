#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to the first node
  * @idx:index of the list where insertion is to be done
  * @n: integer holding data
  * Return: address of the new node
  */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	temp= *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp = temp->next;
	}
	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);
}
