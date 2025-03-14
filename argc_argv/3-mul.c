#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i, x;

	(void)argc;
	if(argv[1] && argv[2])
	{
		i = atoi(argv[1]), x = atoi(argv[2]);
		printf("%d\n", i * x);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
