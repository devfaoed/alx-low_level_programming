#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character
 * Return: Pointer to array or Null
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
