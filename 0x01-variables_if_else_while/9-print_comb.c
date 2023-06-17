#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    putchar('0');
    for (int i = 1; i < 10; i++)
    {
        putchar(',');
        putchar(' ');
        putchar(i + '0');
    }
    putchar('\n');
    return (0);
}

