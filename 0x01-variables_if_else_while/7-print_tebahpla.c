#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 * Return: Zero
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
