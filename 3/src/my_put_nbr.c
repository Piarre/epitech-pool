/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Print a number
*/
#include "../include/my_putchar.h"
#include <stdio.h>
#include <unistd.h>

int my_put_nbr(int nb)
{
    if (nb > 9) {
        my_put_nbr(nb / 10);
    } else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
        my_put_nbr(nb);
    }
    my_putchar(nb % 10 + '0');
    return 0;
}
