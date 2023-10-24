#include <string.h>
/**
 * _strstr -finds the first occurrence of a substring.
 * @haystack:The null-terminated string has to be searched.
 * @needle:The null-terminated string is to be found within 'haystack'.
 * Return:returns a pointer to first occurrence.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
