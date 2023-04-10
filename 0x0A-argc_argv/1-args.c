#include <stdio.h>
/**
  * main - prints the number of arguements
  * @argc: number of arguements
  * @argv: array of arguements
  * Return: Always 0
  */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
