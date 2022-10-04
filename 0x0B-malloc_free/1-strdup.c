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
	int len = strlen(str);
	char *dest = (char *) malloc((len * sizeof(char)) + 1);

	if (str == NULL)
		return (NULL);
	if (!dest)
		return (NULL);
	while (i < len)
	{
		*(dest + i) = *(str + i);
		i++;
	}
	return (dest);
}
