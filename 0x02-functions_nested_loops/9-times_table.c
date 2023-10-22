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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			itoa((i * j), buffer, 10);
			for (int k = 0; k < strlen(buffer); k++)
				putchar(buffer[k]);
			if (j < 9)
				putchar(32);
		}
		putchar(10);
	}
}
