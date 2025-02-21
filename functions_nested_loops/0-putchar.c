#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char str[8] = "_putchar";

	for (n = 0; n <= 7; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
	return (0);
}
