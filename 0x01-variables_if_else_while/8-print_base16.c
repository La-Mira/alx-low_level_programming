#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n < 10; n++)
		putchar(n % 10 + '0');
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
