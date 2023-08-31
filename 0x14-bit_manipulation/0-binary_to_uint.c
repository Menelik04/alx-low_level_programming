#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
        if (b == NULL)
        {
                return (0);
        }

        int length;
        unsigned int power;
        int i;
        
        length = 0;
        while (b[length] != '\0')
                length++;
        for (i = length - 1; i >= 0; i--)
        {
                if (b[i] == '0' || b[i] == '1')
                {
                        unsigned int result;
                        result = 0;
                        power = 1;
                        result = result + (b[i] - '0') * power;
                        power = power * 2;
                }
                else
                {
                        return (0);
                }
        }
        return (result);
}
