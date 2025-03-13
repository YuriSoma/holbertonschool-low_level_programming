#include "main.h"

/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argv[argc - 1]; i++)
	{
		_putchar(*argv[0][i]);
	}
        return (0);
}
