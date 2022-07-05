#include "main.h"

/**
 * print_times_table - times table
 *
 * Return: Void.
 */

void print_times_table(int n)
{
        int a, b, c;

        for (b = 0; b <= n; b++)
        {
                for (a = 0; a <= n; a++)
                {
                        c = a * b;
                        if (a == 0)
                        {
                                _putchar(c + '0');
                        }
                        else if (c >= n)
                        {
                                _putchar(' ');
                                _putchar(c / 10 + '0');
                                _putchar(c % 10 + '0');
                        }
                        else
                        {
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(c + '0');
                        }
                        if (a != n)
                        {
                                _putchar(',');
                        }
                }
                _putchar('\n');
        }
}
