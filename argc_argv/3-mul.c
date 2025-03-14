#include "main.h"
#include <stdio.h>

/**
 * main - Entry point and does multiplication of 2 arguments, and prints Error
 * if no enough number arguments.
 * @argc: arguments counter (Unused)
 * @argv: pointer of the argument vector which is an array of all arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = *argv[1], x = *argv[2];

	(void)argc;
	if(argv[i] && argv[x])
	{
		printf("%d\n", i * x);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
