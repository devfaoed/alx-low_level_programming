#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive nums
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, j, res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
