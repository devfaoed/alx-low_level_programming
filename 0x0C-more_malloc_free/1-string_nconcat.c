#include "main.h"

/**
 * _strlen - Gives length og string
 * @s: Param
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		x++;
		i++;
	}

	return (x);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: Number of bytes
 * Return: Pointer to string, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int len, i, j;
	int num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	p = malloc(sizeof(*p) * len);
	if (p == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < num)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';

	return (p);
}
