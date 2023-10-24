#include <stdio.h>
/**
 * print_array - elements of an array of integers.
 * @a: numbers of arrays
 * @n: number of elements
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	int j;

	for (i = 0; j < n; j++)
	{
		printf("%d", a[j]);
	if (j < n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}
