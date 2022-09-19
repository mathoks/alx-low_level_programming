#include "main.h"
/**
 * rev_string - prints
 * @s: ggfhfh
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j;
	char *begin, *end, temp;
	begin = s;
	end = s;
	
	i = 0;
	while (*(begin + i) != '\0')
	{
		i++;
	}
	for (j = 0; j <= i - 1; j++)
	{
		end++;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
	_putchar('\n');
}
