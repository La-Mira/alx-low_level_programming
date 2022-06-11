#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * ranging from 0-99, separated by a comma followed by a space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i == 98 && j == 99)
					continue;
					putchar(',');
					putchar(' ');
			}
		}
	}
				putchar('\n');
				return (0);
}
