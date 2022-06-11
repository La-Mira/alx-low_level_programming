#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits,
 * putting into consideration the same combinations
 * with the smallest combinations of the combinations printed
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
		for (m = n + 1; m <= 8; m++)
		{
			for (l = m + 1; l < 10; l++)
			{
				if (n == 7 && m == 8 && l == 9)
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((l % 10) + '0');
				continue;

				if (n < m < l)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
