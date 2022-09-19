#include "main.h"
/**
 * rev_string - prints
 * @s: ggfhfh
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j;
	char *text = s;
	
	i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(text[j]);
	}
	_putchar('\n');
}
