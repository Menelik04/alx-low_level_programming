#include "main.h"
#include <stdio.h>
/**
 * main - function that prints the alphabet, in lowercase.
 * discription - using putchar twice.
 * Return - Always 0 (success).
 */
void print_alphabet(void)
{
	char l;
	/* to print alphabets in lowercase */
	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
