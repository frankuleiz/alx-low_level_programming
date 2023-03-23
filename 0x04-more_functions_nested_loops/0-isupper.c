#include "main.h"
/**
  * _isupper - Checks if its uppercase
  * @c: The character to be checked
  * Return: 1 or 0
  */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
