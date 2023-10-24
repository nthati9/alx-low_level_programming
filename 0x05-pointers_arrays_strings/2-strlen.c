/**
 * _strlen - prints size of the string.
 * @s: char part of the string
 *
 * Return: returns size of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
