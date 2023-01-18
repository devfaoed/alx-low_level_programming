#include "main.h"

/**
 * factorial - Finds the factorial of integer
 * @n: integer value
 * Return: Factorial val
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
