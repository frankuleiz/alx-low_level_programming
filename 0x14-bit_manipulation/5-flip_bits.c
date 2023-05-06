#include "main.h"

/**
  * flip_bits - returns the number of bits needed to traverse
  * @n: first integer
  * @m: second integer
  * Return: bits needed to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int i = 0;

	while (result != 0)
	{
		i += result & 1;
		result >>= 1;
	}
	return (i);
}
