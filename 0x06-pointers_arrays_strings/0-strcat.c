#include "main.h"

/**
 * _strcat - function to concatenate two strings and return a new string
 * @dest: string 1
 * @src: string 2
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int length, j; /* j will hold the length of the source */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
