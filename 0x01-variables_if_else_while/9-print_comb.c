#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints all possible combinations of single-digit
 * numbers in ascending order with each number 
 * separated by a , and a space from another
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
