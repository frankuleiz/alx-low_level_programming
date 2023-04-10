#include <stdio.h>
/**
  * main - prints all arguements it receives
  * @argc: number of arguements
  * @argv: array of arguements
  * Return: Alwys 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
