#include "main.h"
/**
  * print_most_numbers - print digits except 2 and 4
  * a: represent character
  * Return: void
  */
void print_most_numbers(void)
{
	int a = 48;

	while (a  <= 57)
	{
		if (a == 50 || a == 52)
		{
			a++;
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

