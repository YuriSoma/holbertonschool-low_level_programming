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
	int i = 1, sum = 0;

	(void)argc;
	while (argv[i])
	{
		if (atoi(argv[i]))
		{
			int it;
			for (it = 0; argv[i][it] != '\0'; it++)
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
