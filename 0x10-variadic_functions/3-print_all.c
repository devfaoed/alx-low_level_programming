#include "variadic_functions.h"

/**
 * print_all - prints arguments based on format given
 * @format: format for args
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, j, c;
	char *s;
	char f[] = "cifs";

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (f[j])
		{
			if (format[i] == f[j] && c)/* c makes sure no separator before first arg */
			{
				printf(", ");
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;
			case 's':
				s = va_arg(args, char *), c = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		i++;
	}
	putchar('\n');
}



















