#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n, x;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %d is %d is ", n, x);
	if (x < 6 && x != 0)

		printf("less than 6 and not 0\n");

	else if (x > 5)

		printf("greater than 5\n");



	else

		printf("and is 0\n");


	return (0);
}
