#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of rows and columns in the times table.
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	// Print column headers
	putchar(' ');
	for (int i = 0; i <= n; i++)
	{
		putchar(' ');
		putchar(' ');
		putchar('0' + i);
	}
	putchar('\n');

	// Print table rows
	for (int i = 0; i <= n; i++)
	{
		putchar(' ');
		putchar('0' + i);

		for (int j = 0; j <= n; j++)
		{
			int product = i * j;
			putchar(' ');
			putchar(' ');
			putchar('0' + product / 10);   // Print tens digit
			putchar('0' + product % 10);   // Print ones digit
		}

		putchar('\n');
	}
}

