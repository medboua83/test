#include "main.h"


/**
 * int _islower - Write a function that checks for lowercase character.
 */


int _islower(int c)
{
	if (c >= 97-48 && c <= 122-48)
	{
		return(1);
	}
	else if (c >= 65-48 && c <= 90-48)
	{
		return(0);
	}
	else
	{
		return(-1);
	}
}
