#include <stdio.h>

/**
 * main - Prints the alphabet
 * Return: Zero
 */
int main(void)
{
	char U;
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (U = 'A'; U <= 'Z'; U++)
	{
		putchar(U);
	}

	putchar('\n');

	return (0);

}
