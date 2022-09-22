#include "main.h"
/**
 * string_toupper - uppercase
 * @str: string
 * Return: str
 */
char *string_toupper(char *str)
{
int i = 0;
char *p = str;
while (*(p + i) != '\0')
{
if (*(p + i) >= 'a' && *(p + i) <= 'z')
{
*(p + i) -= 32;
}
i++;
}
return (p++);
}
