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

	for (; i <= 98; i++)
	{
		itoa(i, buffer, 10);

		for (j = 0; j < strlen(buffer); j++)
			putchar(buffer[j]);


		if (i < 98)
		{
			putchar(',');
			putchar(32);
		}
	}
}
