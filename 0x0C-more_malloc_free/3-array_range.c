#include "main.h"
/**
  * array_range - create an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: NULL or pointer
  */

int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);

}
