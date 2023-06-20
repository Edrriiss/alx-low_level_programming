#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch = 'A';

	if (_islower(ch))
		printf("%c is a lowercase character.\n", ch);
	else
		printf("%c is not a lowercase character.\n", ch);

	if (_isalpha(ch))
		printf("%c is an alphabetic character.\n", ch);
	else
		printf("%c is not an alphabetic character.\n", ch);

	return (0);
}

