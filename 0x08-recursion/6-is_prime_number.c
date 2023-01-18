#include "main.h"

/**
 * is_prime_number - Checks if arg is a prime num
 * @n: integer val
 * @c: check
 * Return: 1 for true 0 for false
 */
int _prime(int n, int c);

int is_prime_number(int n)
{
	int c = 2;

	return (_prime(n, c));
}

/**
 * _prime - checks if n is divisible by numbers from 2 to n
 * @n: num
 * @c: check
 * Return: 1 for prime, 0 otherwise
 */
int _prime(int n, int c)
{
	if (n <= 1)
		return (0);
	else if (c == n)
		return (1);
	else if (n % c == 0 || n <= 0)
		return (0);
	else
		return (_prime(n, c + 1));
}
