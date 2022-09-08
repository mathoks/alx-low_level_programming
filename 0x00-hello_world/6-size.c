#include <stdio.h>
/**
 * main - Displays sizes
 * @a: Bit size1
 * @b: Bit size2
 * @c: Bit size3
 * @d: Bit size4
 * @e: Bit size5
 *
 * Description: Print sizes
 * Return: Always 0 (success)
 */
int main(void)
{
int a,b,c,d,e;
a=1;
b=c=e=4;
d=8;
printf("Size of a char: %d byte(s)\nSize of an int:%d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n" , a,b,c,d,e);
return (0);
}
