#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - check
 *@s:char
 *Return:void
 */
void rev_string(char *s)
{

	int n =  _strlen(s);
	int i = 0;
	char tmb;

	while (i < n / 2)
	{
		tmb = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmb;
		i++;
	}
}
