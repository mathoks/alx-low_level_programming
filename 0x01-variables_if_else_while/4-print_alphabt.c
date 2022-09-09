#include <stdio.h>
/**
 * main - omits q and e
 * Description: prints lowercase
 * Return: 0 (success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c = 'e')
{
c++;
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
