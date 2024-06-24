#include "main.h"

/**
 * swap_int- Swap  integers using pointers
 *
 * @a: 98
 *
 * @b: 42
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	 x = *a;
	 *a = *b;
	 *b = x;

}
