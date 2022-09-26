#include "main.h"

/**
 * print_line - Prints line
 * Description: Prints line n times
 * @n: length of line
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
