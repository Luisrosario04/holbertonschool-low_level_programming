#include "main.h"

/**
 *_memset - fills memory whit a constant byte
 *@s: char
 *@b: char
 *@n: insigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
