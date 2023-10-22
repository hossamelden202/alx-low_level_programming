#include "main.h"
#include "2-strlen.c"
/**
* print_rev - chevkl
*@s:char
*Return:void
*/
void print_rev(char *s)
{

	int i = 0;
	int n = _strlen(s);

	while (i < n)
	{
		putchar(s[n - i - 1]);
		i++;
	}


}
