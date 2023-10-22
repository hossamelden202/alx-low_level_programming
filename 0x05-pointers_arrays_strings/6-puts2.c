#include "main.h"
#include "2-strlen.c"
/**
 *puts2 - do
 *@str:int
 *Return:void
 */
void puts2(char *str)
{
	int n = _strlen(str);
	int i = 0;

	while (i < n)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
