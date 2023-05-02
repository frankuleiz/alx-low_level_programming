#include "lists.h"

/**
  * free_listint - frees a node
  * @head: poiter to a node
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
