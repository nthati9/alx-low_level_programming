#include "main.h"
#include <string.h>
/**
 * _strpbrk -searches a string for any of the set of bytes.
 * @s:The null-terminated string to be examined.
 * @accept:string containing a set of bytes to search for.
 * Return:the function returns the pointer to the byte.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
