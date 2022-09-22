#include "main.h"
/**
 * _strncpy - copy
 * @dest: destination
 * @src: source
 * @n: nuber
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n--)
	{
		while (!(*ptr++ = *src++))
			return (dest);
	}
	return (dest);
}
