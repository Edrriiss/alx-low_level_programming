#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}

