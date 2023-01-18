#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 * Return: Zero
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
