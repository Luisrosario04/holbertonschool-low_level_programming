#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string
 * @s:pointer char
 * return:void
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	n = i - 1;
	for (i = n; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
putchar('\n');
return;
}
