#include "main.h"
/**
 * print_d - prints an integer
 * @ap: argument list
 * Return: number of characters printed
 */
int print_d(va_list ap)
{
    int n = va_arg(ap, int);
    int count = 0;

    if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }

    char buffer[32];
    int len = 0;
    do {
        buffer[len++] = (n % 10) + '0';
        n /= 10;
    } while (n > 0);

    if (len == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        for (int i = len - 1; i >= 0; i--)
        {
            _putchar(buffer[i]);
            count++;
        }
    }

    return count;
}

