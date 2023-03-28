#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_S - A function that prints a string, with non-printable
 * characters (0 < ASCII value < 32 or >= 127) represented in hexadecimal.
 * @s: string to print
 * Return: number of printed characters
 */
int print_S(va_list s)
{
    char *str, *hex;
    int i, j, count = 0;

    str = va_arg(s, char *);
    if (str == NULL)
        str = "(null)";

    for (i = 0; str[i]; i++)
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            printf("\\x");
            hex = "0123456789ABCDEF";
            j = str[i] / 16;
            printf("%c", hex[j]);
            j = str[i] % 16;
            printf("%c", hex[j]);
            count += 4;
        }
        else
        {
            putchar(str[i]);
            count++;
        }
    }
    return (count);
}

