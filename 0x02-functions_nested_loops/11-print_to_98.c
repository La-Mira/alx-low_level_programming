#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n t0 98,
 * separated by a comma, followed by a space
 * and should be printed in order,
 * followed by a new line
 * @n: print from this number to 98
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
		else
		{
			while (n < 98)
				printf("%d, ", n++);
			printf("%d\n", n);
		}
}
