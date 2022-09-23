#include "main.h"

/**
 * cap_string - Capitalizes a string
 * @s:  String
 * Return:  Capitlized string
 */
char *cap_string(char *s)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;

		j = 0;
		while (separator[j] != '\0')
		{
			if (s[i] == separator[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
