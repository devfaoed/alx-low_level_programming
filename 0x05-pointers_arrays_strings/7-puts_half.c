#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: String param
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, h;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		h = i / 2;
	}
	else
	{
		h = (i + 1) / 2;
	}
	while (h < i)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
