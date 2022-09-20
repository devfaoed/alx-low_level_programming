#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0, l, m;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	i = 0;
	j = l - 1;

	while (i < j)
	{
		m = s[i];
		s[i] = s[j];
		s[j] = m;
		i++;
		j--;
	}
}
