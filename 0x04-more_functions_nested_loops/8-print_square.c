#include "main.h"

/**
 * print_square - Print square
 * Descriptions: Uses the # character to make squares
 * @size: Param
 * Retyurn: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, b;

		l = 0;
		while (l < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			l++;
		}
	}
}
