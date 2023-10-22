#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		i++;
		putchar(i);
	}
	putchar(10);

	return (0);
}
