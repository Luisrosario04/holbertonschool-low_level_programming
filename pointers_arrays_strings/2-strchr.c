#include "main.h"
#include <stddef.h>

/**
 * _strchr-Locates a character in a string.
 * @s: the string to search
 * @c: the character to locate
 * Return: Pointer to the first occurrence of the character @c on the string @s
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
