#include "function_pointers.h"
/**
  * array_iterator - iterates an array
  * @array: pointer to array
  * @size: size of array
  * @action: pointer to a function
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
