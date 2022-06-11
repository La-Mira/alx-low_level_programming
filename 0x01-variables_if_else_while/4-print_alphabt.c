#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabets except q and e in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while ( n <= 'z')
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
