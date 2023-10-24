#include <stdio.h>
/**
 * swap_int- variables are being swapped.
 * @a: integer swap
 * @b: integer swap
 *
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
