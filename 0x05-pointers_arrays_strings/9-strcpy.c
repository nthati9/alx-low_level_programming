#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy of a string.
 * @dest: copy of the string
 * @src: string is to be copied
 *
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}

	dest[j] = '\0';

	return (dest);
}
