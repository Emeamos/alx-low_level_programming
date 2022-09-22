#include "main.h"

/**
 * _strncat - function to concatenate two strings and return a new string
 * with n elements of the appended string
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to include from appended string
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (p);
}
