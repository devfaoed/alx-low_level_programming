#include <stdio.h>

/**
 * main - prints the argument count
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", --argc);
	return (0);
}
