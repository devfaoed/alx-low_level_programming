#include "main.h"


/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: no of members
 * @size: ...
 * Return: NULL if malloc fails, size = 0, nmemb = 0
 * Pointer to memory is success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
