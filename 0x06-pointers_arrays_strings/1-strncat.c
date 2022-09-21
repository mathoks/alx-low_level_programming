#include "main.h"
/**
 * _strncat - concate
 * @dest: dggfgf
 * @src: source
 * @n: bytes
 *
 * Return: hhh
 */
char *_strncat(char *dest, char *src, int n)
{
char *pr = dest;

while (*pr != '\0')
{
pr++;
}
while (n--)
{
while (!(*pr++ = *src++))
{
return (dest);
}
}
return (dest);
}
