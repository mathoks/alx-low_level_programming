#include "main.h"
/**
 * _strcmp - ghh
 * @s1: value
 * @s2: value
 * Return: ghgg
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
