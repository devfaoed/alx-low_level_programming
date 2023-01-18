#include "main.h"

/**
 * _strdup - duplicates a string and returns its pointer
 * @str: string to be duplicated
 * Return: pointer to string or Null
 */
char *_strdup(char *str)
{
	char *p;
	int i, strlen;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strlen++;
	p = malloc(sizeof(char) * (strlen + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		p[i] = str[i];

	p[strlen] = '\0';

	return (p);
}
