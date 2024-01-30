#include "main.h"

/**
 * _strlen - finds the length of a string.
 * @s: string pointer
 * Return: integer
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return (i);
}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string character pointer
 * Return: integer
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
