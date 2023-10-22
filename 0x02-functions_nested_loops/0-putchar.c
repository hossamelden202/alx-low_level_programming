#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	char x[20] = {"_putchar"};

	putchar('_');

	for (char i = 0; i < 20; i++)

		putchar(x[i]);

	return (0);


}
