#include "main.h"

/**
 *
 *
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
