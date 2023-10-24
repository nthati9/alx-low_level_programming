#include <stdio.h>

/**
 * rev_string - reverses the string.
 * @s: the string is to be reversed
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int j;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[j];
		s[j] = s[length - j - 1];
		s[length - j - 1] = temp;
	}
}
