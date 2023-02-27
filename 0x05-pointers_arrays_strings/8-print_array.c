#include "main.h"
#include <stdio>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of values to be printed
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
			printf(", ");
	}

	printf('\n');
}
