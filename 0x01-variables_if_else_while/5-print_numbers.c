#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
