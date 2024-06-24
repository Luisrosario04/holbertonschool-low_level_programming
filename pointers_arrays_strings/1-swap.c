#include "main.h"

/**
 * swap_int- Swap  integers using pointers
 *
 * @int a; interger
 *
 * @int b; interger
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
