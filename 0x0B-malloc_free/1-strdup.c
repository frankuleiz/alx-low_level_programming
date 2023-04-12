#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated memory
  * @str: string to be copied
  * Return: NULL or pointer
  */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	copy = (char *)malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
