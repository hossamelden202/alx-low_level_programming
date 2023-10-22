#include <stdio.h>
/**
* jack_bauer - print
* Return: void
*/
void jack_bauer(void)
{
	for (int w = 48; w <= 50; w++)
	{

		for (int q = 48; q <= 57; q++)
		{
			if (q == 52)
				break;
			for (int i = 48; i < 54; i++)
			{

				for (int j = 48; j <= 57; j++)
				{
					putchar(w);
					putchar(q);
					putchar(':');
					putchar(i);
					putchar(j);
					putchar(10);
				}
			}
		}
	}
}
