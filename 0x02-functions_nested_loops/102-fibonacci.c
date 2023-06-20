#include <stdio.h>

void fibonacci_sequence(int n, int sequence[])
{
    sequence[0] = 1;  // First Fibonacci number
    sequence[1] = 2;  // Second Fibonacci number

    for (int i = 2; i < n; i++)
    {
        sequence[i] = sequence[i - 1] + sequence[i - 2];  // Compute the next Fibonacci number
    }
}

void print_fibonacci_sequence(int sequence[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", sequence[i]);  // Print the number

        if (i != n - 1)
        {
            printf(", ");  // Print comma and space for all numbers except the last one
        }
    }
    printf("\n");
}

int main(void)
{
    int n = 50;  // Number of Fibonacci numbers to generate
    int fib_sequence[n];

    fibonacci_sequence(n, fib_sequence);
    print_fibonacci_sequence(fib_sequence, n);

    return (0);
}

