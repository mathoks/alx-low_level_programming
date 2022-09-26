#include "main.h"
/**
 * _memcpy - hhggs
 * @dest: hjshs
 * @src: hjsjh
 * @n: hggsu
 * Return: jjej
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *s = src;

	while (n--)
		*p++ = *s++;
	return (dest);
}
