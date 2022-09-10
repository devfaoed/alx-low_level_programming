#include <stdio.h>

/**
 * main - Prints the alphabet except q and e
 * Return: Zero
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		} else
		{
			c++;
		}
	}

	putchar('\n');

	return (0);
}
