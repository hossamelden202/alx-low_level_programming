#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *print_to_98 - check the code
 *@n:int
 * Return: void
 */
void print_to_98(int n)
{

	int i = n;
	int j = 0;
	char buffer[3];

	while (i <= 98)
	{
		itoa(i, buffer, 10);
		j = 0;
		while (j < strlen(buffer))
		{
			putchar(buffer[j]);
			j++;
		}

		if (i < 98)
		{
			putchar(',');
			putchar(32);
		}
		i++;
	}
}
