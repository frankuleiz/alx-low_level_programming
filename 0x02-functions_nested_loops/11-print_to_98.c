#include "main.h"

#include <stdio.h>
/**
  * print_to_98 - Entry point to printing
  * @n: The parameter
  * Return: value of n
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}



