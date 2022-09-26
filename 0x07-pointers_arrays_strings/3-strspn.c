#include "main.h"
#include "string.h"
/**
 * _strspn - ghh
 * @s: dffg
 * @accept: fgfdd
 * Return: fggg
 */
unsigned int _strspn(char *s, char *accept)
{
	int ret = 0;

	while (*s && strchr(accept, *s++))
		ret++;
	return (ret);
}
