#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main: prints if the number is positive negative or zero
 * return: always Succes (0)
 *
 */

int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0);
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else (n < 0)
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
