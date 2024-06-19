#include "main.h"

/**
 * print_alphabet - check the code for void print_alphabet(void);
 * Description: Print the alphabet whit _putchar
 *  Return: Always (0)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	}
