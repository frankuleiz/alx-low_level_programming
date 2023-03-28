#include "main.h"
/**
  * _puts - prints a string
  * @str: string to be printed
  *Return: void
  */
void _puts(char *str)
{
	char a;

	for (a = 0; *str != '\0'; a++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
