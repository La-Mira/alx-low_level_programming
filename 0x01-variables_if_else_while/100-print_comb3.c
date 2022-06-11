#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');
		}
		if ((n == 8) && (m == 9))
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
