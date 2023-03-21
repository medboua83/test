#include "main.h"


/**
 * int _abs(int) - Write a function that computes the absolute value of an integer.
 * @n : integer 
 * Return: the absolute value of an integer. 
 */

int int _abs(int n)
{
	if (n < 0)
	{
		return (-1*n);
	}
	else
		return (n);
}
