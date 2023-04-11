#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds positive numbers
  * @argc: number of arguements
  * @argv: array of arguements
  * Return: Always 0 or 1
  */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			char *c;
			long n = strtol(argv[i], &c, 10);

			if (*c != '\0' || n <= 0)
			{
				printf("Error\n");
				return (1);
			}
			result += n;
		}
		printf("%d\n", result);
	}
	return (0);
}
