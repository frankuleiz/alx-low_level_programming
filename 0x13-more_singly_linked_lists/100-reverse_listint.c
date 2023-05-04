#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: a pointer to the first node
  * Return: *head
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *prev = NULL;

	while (ptr != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = prev;
		prev= *head;
		*head = ptr;
	}
	*head = prev;

	return (*head);
}
