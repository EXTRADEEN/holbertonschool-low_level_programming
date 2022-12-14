#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints "n" element of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
