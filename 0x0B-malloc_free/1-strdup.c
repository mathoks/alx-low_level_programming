#include "main.h"
#include "stdlib.h"
#include "string.h"
/**
 * _strdup - gffg
 * @str: sghj
 * Return: dest
 */
char *_strdup(char *str)
{
	int i = 0;
	int len;
	char *dest;

	if (str == NULL)
		return (NULL);
	len = strlen(str)+ 1;
	dest = (char *) malloc((len * sizeof(char)));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		*(dest + i) = *(str + i);
		i++;
	}
	return (dest);
}
