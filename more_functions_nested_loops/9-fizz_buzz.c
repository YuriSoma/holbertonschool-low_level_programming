#include <stdio.h>

/**
 * fizz-buzz - prints 1 - 100, replace multipies of 3 with Fizz,
 * and multiplies 5 with buzz.
 *
 */
void fizz-buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
}
