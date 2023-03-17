#include <stdio.h>

/**
 * main - using putchar to print alphabets
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	for (i = 97; i<= 100; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);

}
