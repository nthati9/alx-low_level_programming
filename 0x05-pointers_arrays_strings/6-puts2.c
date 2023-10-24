#include <stdio.h>
/**
 * puts2 - half a string.
 * @str: the string is printed
 *
 * Return: no return
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
