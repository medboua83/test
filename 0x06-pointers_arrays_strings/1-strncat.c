#include "main.h"
#include <string.h>
/**
 * _strcat -  concatenates two strings.
 * @dest: pointer of char
 * @src: pointer of char
 * Return: Returns a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src, int n)
{
	 size_t dest_len = strlen(dest);
	 size_t i;
	 
	 for (i = 0; i < n && src[i] != '\0'; i++)
	 {
		 dest[dest_len + i] = src[i];
	 }
	 dest[dest_len + i] = '\0';
}
