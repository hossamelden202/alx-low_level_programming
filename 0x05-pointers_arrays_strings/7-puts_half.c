#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - do
 *@str:int
 *Return:void
 */
void puts_half(char *str)
{
	int i = 0;
	int n = _strlen(str);

	while (i < n)
	{
		_putchar(str[i]);
		i++;

	}

}
