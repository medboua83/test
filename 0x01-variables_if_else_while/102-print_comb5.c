#include <stdio.h>

/**
 * main - Software is eating the World
 *
 * Return: zero
 */
int main(void)
{
	int i, y, x, z, suma, sumb;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (y = 48 ; y <= 57 ; y++)
		{
			for (x = 48 ; x <= 57 ; x++)
			{
				for (z = 48 ; z <= 57 ; z++)
				{
					suma = (((i - 48) * 10) + (y - 48));
					sumb = (((x - 48) * 10) + (z - 48));

					if (suma < sumb)
					{
						putchar(i);
						putchar(y);
						putchar(' ');
						putchar(x);
						putchar(z);
					}
					if ((suma < sumb) && !((i == 57) && (y == 56)))
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
