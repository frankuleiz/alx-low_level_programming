#include "main.h"
/**
  * _strchr - Entry point
  * @s: string
  * @c: first occurence character
  * Return: s or NULL
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (*s[i] == c)
			return (&s[i]);
	}
	return (0);
}
