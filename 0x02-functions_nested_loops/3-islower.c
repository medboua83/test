#include "main.h"


/**
 * int _islower - Write a function that checks for lowercase character.
 */


int _islower(int c)
{
	int i;

	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else if (c >= 65 && c <= 90)
	{
		return(0);
	}
}
