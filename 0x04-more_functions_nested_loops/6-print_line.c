#include "main.h"
/**
  * print_line - Entry point
  * @n: number of times of the character
  * Return: n
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
