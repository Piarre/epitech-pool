

int my_compute_factorial_it(int nb)
{
    if (nb < 0)
    {
        return 0;
    }

    if (nb == 0)
    {
        return 1;
    }

    int result = 1;

    for (int i = 1; i <= nb; i++)
    {
        result = result * i;
    }

    return result;
}