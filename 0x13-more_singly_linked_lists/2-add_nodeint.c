#include "lists.h"

/**
  * add_nodeint - adds a ew node at the beginning
  * @n: integer
  * @head: pointer to pointer of an address
  * Return: NULL or address of new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);

}
