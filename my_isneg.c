int my_isneg(int n);

void    my_isneg(int n)
{
    if (n >= 0)
    {
        write(1, "P", 1);
    }
    else
    {
        write(1, "N", 1);
    }
    my_putchar('\n');
}

