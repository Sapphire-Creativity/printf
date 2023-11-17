#include "main.h"

/**
 * _strlenc - a function that prints the length of a string
 * @s: string
 * Return: 1
 */

int _strlenc(const char *s)
{
	int length = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strlen - finds the length of string
 * @s: string
 * Return: integer length of the string
 */

int _strlen(const char *s)
{
	int length = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
