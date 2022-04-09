#include <stdio.h>
#include <stdlib.h>
/**
 * main- Write a program that prints
 * all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
int x;
int y;
int z = 0;

while (z < 10)
{
y = 0;
while (y < 10)
{
x = 0;
while (x < 10)
{
if (x != y && y != z && z < y && y < x)
{
putchar('0' + z);
putchar('0' + y);
putchar('0' + x);
if (x + y + z != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
x++;
}
y++;
}
z++;
}
putchar('\n');
return (0);
}

