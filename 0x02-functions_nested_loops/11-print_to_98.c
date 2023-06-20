void print_to_98(int n)
{
    int first = 1;

    if (n == 98)
    {
        first = 0;
    }
    else
    {
        if (n > 98)
        {
            while (n > 98)
            {
                if (first == 1)
                {
                    first = 0;
                }
                else
                {
                    putchar(',');
                    putchar(' ');
                }

                printf("%d", n);
                n--;
            }
        }
        else
        {
            while (n < 98)
            {
                if (first == 1)
                {
                    first = 0;
                }
                else
                {
                    putchar(',');
                    putchar(' ');
                }

                printf("%d", n);
                n++;
            }
        }
    }

    putchar(',');
    putchar(' ');
    putchar('9');
    putchar('8');
    putchar('\n');
}

