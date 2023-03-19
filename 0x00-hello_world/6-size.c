#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu bytes(s)\n", sizeof(a));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(b));
	printf("size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);

}
