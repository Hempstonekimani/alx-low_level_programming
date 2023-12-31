#include "main.h"

/**
 * print_last_digit - get the last digit of a number
 *
 * @r: an integer output
 * Description: print with _ putchar delared
 *
 * Return: last digit of r
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
	{
		i = -1 * (r % 10);
	}
	else
	{
		i = r % 10;
	}
	_putchar('0' + i);
	return (i);
}
