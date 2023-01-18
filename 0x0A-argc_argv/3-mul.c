#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two nums
 * @argc: args count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		x = 1;
	}
	else
	{
		int a = atoi(argv[1]), b = atoi(argv[2]);

		printf("%d\n", a * b);
		x = 0;
	}

	return (x);
}
