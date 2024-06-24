#include "main.h"

/**
 * swap_int- Swap the values of two integers
 *
 * @int a; variable 1
 *
 * @int b; variable 2
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	return;
}
