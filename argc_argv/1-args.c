#include "main.h"

/**
 * main - Entry point and printing the program arguments counter.
 * @argc: arguments counter
 * @argv: pointer of the argument vector which is an array of all arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc <= 9)
		_putchar((argc - 1) + '0');
	_putchar('\n');
	return (0);
}
