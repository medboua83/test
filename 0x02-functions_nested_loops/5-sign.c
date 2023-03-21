#include "main.h"


/**
 * print_sign  - Write a function that prints the sign of a number.
 * @n: is the char to be checked
 * Return: 1 if char is lowercase or uppercase, otherwise 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		return (-2);
	}
}
