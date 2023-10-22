#include <stdio.h>
/**
 *print_sign - check if it is positive or negative or zero
 *@n:type int
 *Return:1 or -1 or 0
 */
int print_sign(int n)
{

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (0);
	}
	else
	{
		putchar('0');
		return (-1);

	}
}
