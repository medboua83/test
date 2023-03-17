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
	int x;

	for (i = 48 ; i <= 56 ; i++)
	{
		for (y = 48 ; y <= 57 ; y++)
		{
			for (x = 48 ; x<= 57 ; x++)
			{
				if (i < y && y < x && i < x)
				{
					putchar(i);
                                        putchar(y);
					putchar(x);
					if (!(i == 55 && y == 56 && x == 57))
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
