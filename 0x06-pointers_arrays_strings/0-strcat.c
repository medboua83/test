#include "main.h"
#include <string.h>
/**
 * _strcat -  concatenates two strings.
 * @dest: pointer of char
 * @src: pointer of char
 * Return: Returns a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
