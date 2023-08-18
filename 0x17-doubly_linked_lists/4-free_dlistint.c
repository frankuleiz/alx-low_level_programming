#include "lists.h"

/**
 * free_dlistint - frees alinked list
 * @head: a pointer
 * Return: dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
