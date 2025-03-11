#include "main.h"

/**
 * n_checker - checks all number from 2 till n to find any divisor number.
 * @n: given number to check its divisors.
 * @x: checker number starts from 2 till it equals n.
 *
 * Return: 1 if x only equals n, if not returns 0.
 */
int n_checker(int n, int x)
{
	if (n < 1)
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
		return n_checker(n, x + 1);
}

/**
 * is_prime_number - checks if the given number is a prime number or not
 * @n: the given number to check
 *
 * Return: 1 if n prime number - or 0 if not
 */
int is_prime_number(int n)
{
	return n_checker(n, 2);
}
