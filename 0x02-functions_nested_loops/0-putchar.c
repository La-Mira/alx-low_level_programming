#include "main.h"
#include <string.h>

/**
 * main -  prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar";

	[[un]signed] [long] int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
