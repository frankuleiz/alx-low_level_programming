#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: pointer of a pointer to a node
  * Return: Node
  */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
