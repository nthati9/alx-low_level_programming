#include <stdio.h>
/**
 * _puts - prints the string, followed by the new line, to stdout.
 * @str: characters of a string
 *
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
