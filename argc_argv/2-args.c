#include "main.h"

/**
 * main - Entry point and prints every argument in new line ends with new line.
 * @argc: arguments counter (Unused)
 * @argv: pointer of the argument vector which is an array of all arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0, x;
	
	(void)argc;
	while (argv[i])
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			_putchar(argv[i][x]);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
