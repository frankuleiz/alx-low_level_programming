#include "main.h"
/**
  * print_most_numbers - print digits except 2 and 4
  * a: represent character
  * Return: void
  */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == 50) || (c == 52))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}

