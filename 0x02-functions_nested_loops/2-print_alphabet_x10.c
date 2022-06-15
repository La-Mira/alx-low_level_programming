#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet_x10(void);
{
	char n;
	int i;

	for (n = 'a'; n <= 'z'; n++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}	
