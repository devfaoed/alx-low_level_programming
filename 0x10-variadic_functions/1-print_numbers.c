#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and a separator
 * @separator: pointer to separator string
 * @n: number of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
