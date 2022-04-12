#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */

void jack_bauer(void)
{

int x;
int xx;
int y;
int yy;
int z = 9;

xx = 0;
while (xx <= 2)
{
	if (xx == 2)
	{
		/*Keep it at 23h, not 29*/
		z = 3;
	}
	x = 0;
	while (x <= a)
	{
		yy = 0;
		while (yy <= 5)
		{
			y = 0;
			while (y <= 9)
			{
				_putchar('0' + xx);
				_putchar('0' + x);
				_putchar(':');
				_putchar('0' + yy);
				_putchar('0' + y);
				_putchar('\n');
				y++;
			}
			yy++;
		}
		x++;
	}
	xx++;
}

}

