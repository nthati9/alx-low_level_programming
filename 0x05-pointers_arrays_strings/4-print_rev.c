#include <stdio.h>
/**
 * print_rev - prints string in reverse.
 * @s: single character of a string
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int size = 0;
	int j;

	while (s[size] != '\0')
	{
		size++;
	}

	for (j = size - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	putchar('\n');
}
