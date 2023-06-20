#include <stdio.h>

int sum_multiples_3_or_5(void)
{
    int limit = 1024;
    int sum_multiples = 0;

    for (int num = 0; num < limit; num++)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            sum_multiples += num;
        }
    }

    return sum_multiples;
}

int main(void)
{
    int result = sum_multiples_3_or_5();
    printf("%d\n", result);

    return (0);
}

