#include "main.h"

/**
 * get_bit - the value of a bit at a given index
 * @n: an integer
 * @index: index starting from 0 of the bit to get
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
