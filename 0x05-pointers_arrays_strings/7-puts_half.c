#include "main.h"
#include "string.h"
/**
 * puts_half - hfhgb
 * @str: gfgfhhf
 * Return: 0
 */
void puts_half(char *str)
{
	char *key = str;
	int i, j;

	j = strlen(str);
	for (i = 0; i <= j - 1; i++)
		if (j % 2 == 0)
		{
			if (i >= j / 2)
			{
				_putchar(key[i]);
			}
		}
		else if (j % 2 != 0)
		{
			if (i > (j - 1) / 2)
			{
				_putchar(key[i]);
			}
		}
	_putchar('\n');
}
