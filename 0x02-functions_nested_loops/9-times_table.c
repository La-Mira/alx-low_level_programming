#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			n = i * j;
			if (n <= 9 && j != 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

