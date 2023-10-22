#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		i++;
		_putchar(i);
	}
	_putchar(10);

	return (0);
}
