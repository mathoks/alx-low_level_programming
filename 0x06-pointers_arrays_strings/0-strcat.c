#include "main.h"
/**
 * _strcat - join two strings
 * @dest: destination
 * @src: source
 * return: ptr
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;
			while (*ptr++ == *src++)
				;
	return dest;
}
