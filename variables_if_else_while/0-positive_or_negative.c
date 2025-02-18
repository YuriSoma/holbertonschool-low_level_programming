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
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n = 0){
                printf("%d 0 is zero\n");
        } else if (n > 0){
                "%d 0 is positive\n"
        }
        return (0);
}
