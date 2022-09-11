#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 * Description: prints
 * Return: Always 0
 */
int main(void)
{
int i, num1, num2;
i = 0;
while (i <= 90)
{
num1 = i / 10;
num2 = i % 10;
if (num1 >= num2)
{
i++;
continue;
}
putchar(num1 + '0');
putchar(num2 + '0');
if (i != 89)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
