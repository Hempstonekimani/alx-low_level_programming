#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 *
 * Description: Print each number in uppercase
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            printf("%d", i); // Print the number as it is
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            printf("%d", i); // Print the number as it is
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");
}

