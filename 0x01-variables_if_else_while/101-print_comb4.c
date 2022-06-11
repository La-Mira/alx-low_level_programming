#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n <= 7; n++)
	{
		for (m = 0; m <= 8; m++)
		{
			for (l = 0; l < 10; l++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((l % 10) + '0');
				if (n <  m && l > m);
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
