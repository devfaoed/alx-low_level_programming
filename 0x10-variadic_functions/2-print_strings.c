#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer to separator string
 * @n: count of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *c;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(li, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(li);
}
