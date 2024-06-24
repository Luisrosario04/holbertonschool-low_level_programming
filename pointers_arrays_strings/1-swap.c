#include "main.h"

/**
 * swap_int- Swap the values of two integers
 * @int a;
 * @int b;
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
