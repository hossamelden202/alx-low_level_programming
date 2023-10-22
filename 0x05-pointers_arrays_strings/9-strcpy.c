#include "main.h"
/**
 *_strcpy - op
 *@dest:char
 *@src:char
 *Return:char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = _strlen(src);

	while (i <= n)
	{

		dest[i] = src[i];

		i++;
	}
	return (dest)
}
