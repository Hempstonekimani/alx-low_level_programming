#include "main.h"

/**
 * print_alphabet_x10 - print alphabet lowcase 10 times
 */

void print_alphabet_x10(void)
{
	char num, letters;

	for (num = 0; num <= 9; num++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
