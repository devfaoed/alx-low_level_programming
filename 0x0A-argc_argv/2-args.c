#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc > 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}
