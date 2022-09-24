#include "main.h"

/**
 * leet - Leet encoding
 * @s: string
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i, j, ind;

	char letters[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				ind = j;
				s[i] = code[ind];
			}
			j++;
		}
		i++;
	}
	return (s);
}
