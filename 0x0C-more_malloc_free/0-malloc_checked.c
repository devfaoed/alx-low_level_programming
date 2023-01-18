#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory in bytes
 * Return: Pointer to memory, otherwise 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
