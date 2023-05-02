#include "lists.h"
/**
  * pop_listint - deletes the head node
  * @head: pointer to a node
  * Return: head note data
  */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int new;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	new = ptr->n;
	free(ptr);
	return (new);
}
