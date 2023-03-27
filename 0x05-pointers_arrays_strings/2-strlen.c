#include "main.h"
/**
  * _strlen - the length of a string
  * @s: string to be calculated
  * Return: a is success
  */
int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; a++)
	{
		s++;
	}


	return (a);
}
