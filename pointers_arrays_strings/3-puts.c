#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string
 * @str:pointer char
 * return:void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
putchar('\n');
return;
}
