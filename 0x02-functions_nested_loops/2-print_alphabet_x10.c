#include "main.h"

/**
 * 10x print_alphabet - Entry point
 * Return:
 */

void print_alphabet_x10(void)
{
	int i, x;

	for(i = 0 ; i < 10 ; i++)
	{
		for (x = 97 ; x <= 122 ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	
}
