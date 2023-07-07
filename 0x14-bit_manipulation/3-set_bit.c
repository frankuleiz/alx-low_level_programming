#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to the set number
 * @index: the index starting from 0 of the set bit
 * Return: success (1) or error (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
