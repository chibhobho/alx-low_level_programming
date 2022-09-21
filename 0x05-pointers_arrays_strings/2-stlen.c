#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s:trlen - Prints the length of a string
 * Return: The length of the string
 */

int _strlen(char *s)
{

	int len = 0;

	while (*(s + len) != '\0')
	len++;
	return (len);
}
