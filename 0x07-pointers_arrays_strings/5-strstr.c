#include "main.h"
#include "string.h"
/**
 * _strstr - hagshd
 * @haystack: jehdj
 * @needle: kekkek
 * Return: jehsj
 */
char *_strstr(char *haystack, char *needle)
{
size_t n = strlen(needle);
while (*haystack)
if (!memcmp(haystack++, needle, n))
return (haystack - 1);
return (0);
}
