#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char n;

	while (i++ < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}	
