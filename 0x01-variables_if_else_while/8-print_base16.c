#include <stdio.h>
/**
  * main - Entry point
  * Description: Prints all the numbers of base 16
  * Return: Always 0
  */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; a <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
