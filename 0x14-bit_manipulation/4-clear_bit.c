#include "main.h"

/**
  * clear_bit - sets the value of a bit to0 at a given index
  * @n: a pointer
  * @index: index starting from 0 of the bit to set
  * Return: 1 on (success) or (-1) on fail
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
