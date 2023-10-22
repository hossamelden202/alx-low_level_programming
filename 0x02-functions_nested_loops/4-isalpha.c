#include <stdio.h>
#include "main.h"
/**
 *_isalpha - check if it is alpha
 *@c:type is int
 *Return: 1 is alpha 0 otherwise
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)

		return (1);

	else

		return (0);
}
