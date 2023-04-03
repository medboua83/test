#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @s: string.
 * @c: character to be located.
 * Return: pointer to first occurrence of NULL if no character found.
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s-1);
		}
		if(a == c)
		{
			return (NULL);
		}
}
