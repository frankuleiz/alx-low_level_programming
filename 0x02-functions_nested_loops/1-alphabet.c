#include "main.h"
/**
  * print_alphabet - Entry point
  * Description: PPrints the alphabet in lowercase
  * Return:Always 0
  */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
