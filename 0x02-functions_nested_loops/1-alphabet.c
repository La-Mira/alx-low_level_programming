#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
	/** The function prints all alphabets in lowercase without a return value */
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
		_putchar('\n');
}
