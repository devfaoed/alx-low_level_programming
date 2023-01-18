#include "main.h"

/**
 * print_name - prints name passed it
 * @name: name passed
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
