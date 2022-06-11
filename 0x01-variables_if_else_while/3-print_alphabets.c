#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main -  prints the alphabet in lowercase, and 
 * then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (n = 'a'; n <= 'z'; n++);
		putchar(n);
	for (n = 'A'; n <= 'Z'; n++);
		putchar(n);
	putchar('\n');
	return (0);
}
