#include<stdio.h>
/**
* main- print different combinations of two digits
* return:Always 0 (Success)
*/
int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		for (int j = i; j <= 57; j++)
		{	putchar(i);

			putchar(j);
			if (i != 56 || j != 57)

			{
				putchar(44);
				putchar(32);

			}
		}
	}

	putchar(10);
	return (0);
}
