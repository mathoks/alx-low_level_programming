#include "main.h"
/**
 * _strcat - join two strings
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *pr = dest;

	while (*pr)
		pr++;
			while ((*pr++ = *src++))
			{
				;
			}
	return (dest);
}
