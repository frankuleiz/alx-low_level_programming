#include "main.h"

/**
  * print_last_digit - Entry point to print last digit
  * @a: digit value
  * Return: Last digit
  */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b > 0)
	{
		_putchar(b + 48);
		return (b);
	}
	else
	{
		_putchar(-b + 48);
		return (b + 48);
	}
}

