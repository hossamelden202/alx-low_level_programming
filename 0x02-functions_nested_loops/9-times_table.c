#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * times_table - check the code
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	char buffer[3];
    i = 0;
	while (i < 10)
	{
        j = 0;
		while (j < 10)
		{
			itoa((i * j), buffer, 10);
            int k = 0;
			while (k < strlen(buffer))
				{
                    putchar(buffer[k]);
                     k++;
                }
			if (j < 9)
				putchar(32);
            j++;
		}
		putchar(10);
        i++;
	}
}
