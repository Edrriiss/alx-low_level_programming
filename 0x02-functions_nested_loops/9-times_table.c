#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting from 0.
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
	printf("9 x %d = %d\n", i, 9 * i);
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	times_table();
	return (0);
}

