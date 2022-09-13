#include "main.h"

/**
 * main - prints alphabet
 * print_alphabet - Prints the alphabet in lowercase
 * Return: Zero
 */
int main(void)
{
	void print_alphabet(void)
	{
		char i = 'a';
		while(i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}

	return (0);
}
