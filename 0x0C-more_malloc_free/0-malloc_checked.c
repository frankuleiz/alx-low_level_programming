#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: integer value
  * Return: 98 or pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
