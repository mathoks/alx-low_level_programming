#include "main.h"
#include "string.h"
/**
 * puts2 - values
 * @str: vga
 * Return: 0
 */
void puts2(char *str)
{
	char *val = str;
	int i, j;

	j = strlen(str);
	for (i = 0 ; i < j - 1; i++)
	{
		if (i % 2 == 0  || i % 2 == 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
