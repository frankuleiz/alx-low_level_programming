#include "main.h"
/**
  * print_numbers - Print numbers from o to 9
  * c: parameter
  * Return: return void
  */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
