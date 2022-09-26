#include "main.h"
#include "main.h"
/**
 * _memset - memset
 * @s: destination
 * @b: const character
 * @n: n bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
