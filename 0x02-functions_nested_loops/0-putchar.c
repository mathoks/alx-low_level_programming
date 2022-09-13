#include "main.h"
/**
 * _putchar - hey putchar
 * Description: prints
 * Return: '0'
 */
int _0putchar(void)
{
char * key = "_putchar";
int count, i; 
count = 0;
while (key[count] != '\0')
{
count++;
}
for (i = 0; i < count; i++)
{
_putchar(key[i]);
}
_putchar('\n');
}
