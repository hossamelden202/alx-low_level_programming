#include "2-main.c"
#include "main.h"
/**
* _strlen - get size of string
*@s: type char
*Return:int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{

		i++;
	}
	return  (i);
}
