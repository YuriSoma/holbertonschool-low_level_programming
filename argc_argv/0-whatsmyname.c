#include "main.h"

/**
 * main - Entry point and printing program file name as first argument
 * even if the file name has been changed.
 * @argc: arguments counter
 * @argv: pointer of the argument vector which is an array of all arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[argc - 1][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
