#include "main.h"

/**
 * print_triangle - Prints triangle
 * Description: Prints Triangle
 * @size: Param
 * Return: zero
 */
void print_triangle(int size)
{
	int l, b, ws;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (ws = 1; ws <= (size - l); ws++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= l; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
