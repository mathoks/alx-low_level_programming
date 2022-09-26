#include "main.h"
/**
 * _memcpy - ghha
 * @dest: ghsh
 * @src: ghhs
 * @n: hhhjd
 * Return: hjjk
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dp = dest;
const char *sp = src;
while (n--)
*dp++ = *sp++;
return (dest);
}
