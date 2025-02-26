#include <stdio.h>

/**
 * main - Entry point
 * @Decription: prints 1 - 100, replace multipies of 3 with Fizz
 * ,and multiplies 5 with buzz.
 *
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
