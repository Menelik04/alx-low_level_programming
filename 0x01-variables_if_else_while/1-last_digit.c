#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a randomly generated number
 * and whether it is greater than 5. less than 6. or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d", n);
	if (x > 5)
	{
		printf("is %d greater than 5\n", x);
	}
	else if (x == 0)
       	{
		 printf("is %d equal to 0\n", x);
       	}
       	else
	{
		 printf("is %d less than 6 and not 0\n", x);
	}

	 return (0);
}
