#include "main.h"

/**
 * *_strcpy - copies a string from src to dest
 * @dest: pointer to the destination
 * @src: pointer to the string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
