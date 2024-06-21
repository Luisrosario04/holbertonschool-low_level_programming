#include "main.h"

/**
 *  _isdigital - check for digit (0-9)
 *  @: The number to be check.
 *
 *  Return: 1 if the number is a digit , otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
