#include <stdio.h>
/**
 * main - to print all possible combinations of single-digit numbers.
 * discription- only use the putchar function.
 * Return: Always 0 (success)
 */
int main(void)
{
        int i;
         for (i = 48; n < 58; i++)
         {
                 putchar(i);
                 if (i != 57)
                 {
                         putchar(',');
                         putchar(',');
                 }
         }
         putchar('\n');
         return (0);
