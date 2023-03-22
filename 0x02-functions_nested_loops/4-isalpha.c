#include "main.h"
/**
* _isalpha - Entry point
* @c: parameter to be checked
* Return: 1 or 0
*/
int _isalpha(int c)
{
	if ((c <= 65 && c >= 90) || (c <= 65 || c >= 122))
		return (1);
	else
		return (0);
}
