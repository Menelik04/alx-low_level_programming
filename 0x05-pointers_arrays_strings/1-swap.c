#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: integer to swap
 * 2b: integer to swap
 */
/* we have 2 parametrs to swap */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
