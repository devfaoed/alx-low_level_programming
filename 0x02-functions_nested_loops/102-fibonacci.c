include <stdio.h>

/**
 * main - First fifty fibonacci numbes=rs from 1
 * Description: writes the fibonacci sequence
 * Return: Zero
 */
int main(void)
{
	int i;
	long int num = 1;
	long int seq = 2;
	long int sum = 0;

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%ld, ", num);
			sum = num + seq;
			num = seq;
			seq = sum;
		}
		else
		{
			printf("%ld\n", num);
		}
	}
	return (0);
}
