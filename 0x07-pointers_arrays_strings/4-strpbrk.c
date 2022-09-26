#include "main.h"
#include "string.h"
/**
 * _strpbrk - mhhff
 * @s: adfgh
 * @accept: dggj
 * Return: gujk
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
if (strchr(s, *accept++))
return ((char *) --s);
return (0);
}
