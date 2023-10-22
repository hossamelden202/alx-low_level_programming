#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print 10 times lower case
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			putchar(j);
			j++;
		}

		putchar(10);
		i++;
	}
}
