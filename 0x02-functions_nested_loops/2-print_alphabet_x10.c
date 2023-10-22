#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print 10 times lower case
 * Return: void
 */
void print_alphabet_x10(void)
{

	for (int i = 0; i < 10; i++)
	{
		for (char i = 'a'; i <= 'z'; i++)

			putchar(i);

		putchar(10);
	}
}
