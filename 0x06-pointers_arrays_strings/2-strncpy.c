#include "main.h"

/**
 * * _strncpy - Copies at most an inputted number
 * @dest: The buffer storing the string copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	char *ztr = src;
	while (n--)
	{
		*ptr++ = *ztr++;	
	}
	return (dest);
}
