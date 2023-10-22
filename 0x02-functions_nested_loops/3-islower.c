#include <stdio.h>
/**
* _islower - check if it is lowercase
* @c:varible c type int
* Return:1 if lower 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
