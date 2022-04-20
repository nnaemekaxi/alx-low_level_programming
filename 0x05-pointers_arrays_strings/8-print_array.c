#include "main.h"
#include <stdio.h>

/**
* print_array - print `n` elements of an array of integers
* @a: int type array pointer
* @n: int type integer
* Description: Numbers must be separated by comma and space.
* Numbers should be displayed in the same order they are stored in array.
* You can only use _putchar to print.
*/

void print_array(int *a, int n)
{
int i;

for (i=0; I < n; n--, i++)
{
If (i == (n – 1))
{
printf("%d", a[i]);
}
else
{
printf("%d" ,  a[i]);
}
}
printf("\n");

}

