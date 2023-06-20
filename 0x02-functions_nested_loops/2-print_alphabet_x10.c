#include "main.h"
#include <stdio.h>
/**
 * main - function that prints 10 times the alphabet, in lowercase.
 * discription - using putchar only.
 * Return - Always 0 (success).
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char y;
	/* to get 10 spaces */
	while (x < 10)
	{
		y = 'a';
		/* to print alphabets in lowercase */
		while (y <= 'z');
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
