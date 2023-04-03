#include "main.h"
/**
  * _memset - Entry point
  * @s: memory address to be filled
  * @b: the desired value
  * @n: the number of bytes to be changed
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
