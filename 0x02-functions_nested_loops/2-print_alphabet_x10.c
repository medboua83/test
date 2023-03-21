#include "main.h"

/**
 * Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i, x;

	for (i = 0 ; i < 10 ; i++)
	{
		for (x = 97 ; x <= 122 ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
