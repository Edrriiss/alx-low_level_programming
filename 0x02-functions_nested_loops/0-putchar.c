#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c[] = "_putchar\n";

    /* Use the write system call to print the string */
    write(1, c, sizeof(c) - 1);

    return (0);
}

