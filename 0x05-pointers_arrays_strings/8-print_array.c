#include "main.h"
#include <stdio.h>
/**
 *print_array - go
 *@a:int
 *@n:int
 *Return:void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(32);
		}
		i++;
	}



}
