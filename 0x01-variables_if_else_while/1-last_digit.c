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
	/* to store the remined decimal number */
	x = n % 10;
	printf("Last digit of %d ", n);
	/* to check the numbers sighn */
	if (x > 5)
	{
		printf("is %d and is greater than 5\n", x);
	}
	else if (x == 0)
       	{
		 printf("is %d and is 0\n", x);
       	}
       	else
	{
		 printf("is %d and is less than 6 and not 0\n", x);
	}
	return (0);
}
