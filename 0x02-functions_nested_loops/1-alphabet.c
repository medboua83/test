#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet(void)
        {
                int i;

                for (i = 97 ; i <= 122 ; i++)
                {
                        _puthcar(i);
                }
                putchar('\n');
	}

	print_alphabet();
	return (0);
}
