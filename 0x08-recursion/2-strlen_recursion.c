#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: pointer to the string
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	if (s[0] != '\0')
		return (1 + _strlen_recursion(&s[1]));
	else
		return (0);
}
