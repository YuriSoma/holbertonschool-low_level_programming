#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 113 && ch != 101)
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
