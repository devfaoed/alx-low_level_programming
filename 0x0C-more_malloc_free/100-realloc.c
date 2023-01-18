#include "main.h"

/**
 * _realloc - reallocates memory to a pointer
 * @ptr: pointer to memory block
 * @old_size: old size of memory on heap
 * @new_size: new size of memory to be allocated
 * Return: pointer to new location of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if ((new_size > old_size) && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		i = 0;
		while (i < old_size)
		{
			p[i] = *((char *) ptr + i);
			i++;
		}
		free(ptr);
	}

	return (p);
}
