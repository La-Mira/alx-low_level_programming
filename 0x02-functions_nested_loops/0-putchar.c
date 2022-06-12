#include <unistd.h>
#include <stdio.h>
#include <main.h>


/**
 * _putchar - writes the character
int _putchar(char c)

{

		return (write(1, &c, 1));

}

int main(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
	return (0);
}
