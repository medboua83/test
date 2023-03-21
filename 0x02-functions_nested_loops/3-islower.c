#include "main.h"


/**
 * int _islower:  Write a function that checks for lowercase character.
 * main - Entry point
 *
 * c : code asci 
 *
 * Return: Always 1 if the letter is lowercase , 0 if else 
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
