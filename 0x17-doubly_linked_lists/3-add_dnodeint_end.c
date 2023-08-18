#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of the list
 * @head: pointer
 * @n: the value
 * Return: address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));


	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	temp = *head;
	node->next = temp;
	temp->prev = node;
	*head = node;
	return (node);
}
