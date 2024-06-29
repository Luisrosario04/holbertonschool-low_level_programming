#include "main.h"
#include <stdio.h>

/**
 * _puts-Prints a string
 *@str: pointer char
 *
 * Return: Alwayas 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(*str);
	}
	putchar('\n');
	return ;
}
