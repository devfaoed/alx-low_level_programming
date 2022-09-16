#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * Description: Prints any length of diagonal line
 * @n: Length of line
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0, ws;

		while (i < n)
		{
			ws = 0;
			while (ws < i)
			{
				_putchar(' ');
				ws++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
