#include "main.h"

/**
 * print_numbers - Printys numbers
 * Description: Prints numbers from 0 - 9 and a new line
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
