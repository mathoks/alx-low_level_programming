#include <stdio.h>
/**
 * main - muliple alpha
 * Description: alphabetx
 * Return: 0 (succed)
 */
int main(void)
{
char c, C;
c = 'a';
C = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
