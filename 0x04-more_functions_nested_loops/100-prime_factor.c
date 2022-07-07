#include <stdio.h>

/**
 * main - biggest prime factor of 612852475143
 *
 * Return: 0 upon success
 */
int main(void)
{
	int i = 2;
	int counter;
	int big_number;

	while (i <= 612852475143)
	{
		int j = 0;

		while (j <= 612852475143)
		{
			if ((i % j) == 0)
				counter += 1;
			j++;
		}
		if (counter == 2)
			big_number = i;
		i++;
	}
	printf("%d",big_number);

	return (0);
}
