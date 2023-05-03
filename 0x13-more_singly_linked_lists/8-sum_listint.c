#include "lists.h"

/**
  * sum_listint - sums up all the data of a list
  * @head: pointer to the first node
  * Return: sum of all the data
  */

int sum_listint(listint_t *head)
{
	int grand = 0;

	while (head != NULL)
	{
		grand += head->n;
		head = head->next;
	}
	return (grand);
}
