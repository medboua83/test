#include <stdio.h>

/**
 * main -Inventing is a combination of brains and materials.
 * The more brains you use, the less material you need
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int y;

	for (i = 48 ; i <= 56 ; i++)
	{
		for (y = 48 ; y <= 57 ; y++ )
		{ if (i < y)
			{
				if (!(i == 48 && y == 48))
				{
					putchar(i);
					putchar(y);
					if (!(i == 56 && y == 57 ))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

		}
	}
	putchar(10);
	return (0);
}
