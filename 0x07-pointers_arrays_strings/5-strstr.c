#include "main.h"
/**
  * _strstr - Entry point
  * @haystack: character input
  * @needle: character input
  * Return: Always 0
  */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	for (; *a != '\0'; a++)
	{
		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
