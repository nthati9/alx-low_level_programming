#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string is to be printed
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int j = (length + 1) / 2;

	while (str[j] != '\0')
	{
		putchar(str[i]);
		j++;
	}
	putchar('\n');
}
