#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print
* Return: void
*/
void jack_bauer(void)
{
    int w = 48;
	while (w <= 50)
	{
        int q = 48;
		for (q <= 57)
		{
			if (q == 52)
				break;
            int i = 48;
			while (i < 54)
			{
                int j = 48; 
				while (j <= 57)
				{
					putchar(w);
					putchar(q);
					putchar(':');
					putchar(i);
					putchar(j);
					putchar(10);
                     j++;
				}
                i++;
			}
            q++;
		}
        w++;
	}
}
