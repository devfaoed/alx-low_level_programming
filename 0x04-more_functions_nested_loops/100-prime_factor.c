#include <stdio.h>

/**
 * main - Print the biggest prime number
 * Description: Prints prime num
 * Return: Zero
 */
int main(void)
{
	long int num, f, i;

	num = 612852475143;
	f = 2;
	if (num % 2 == 0)
	{
		while (num % 2 == 0)
		{
			f = 2;
			num = num / 2;
		}
	}
	else
	{
		for (i = 3; i <= num; i += 2)
		{
			while (num % i == 0)
			{
				f = i;
				num = num / i;
			}
		}
	}
	if (num > 2)
	{
		f = num;
	}
	printf("%ld\n", f);

	return (0);
}
