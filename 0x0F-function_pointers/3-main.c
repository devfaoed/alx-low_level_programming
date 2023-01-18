#include "3-calc.h"

/**
 * main - Accepts integers and computes them
 * @argc: args count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res;
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '%' || (*(argv[2]) == '/')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = oprt(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);

	return (0);
}
