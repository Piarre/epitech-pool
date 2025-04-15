/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Print numbers with 3 digits (with leading zeros)
*/
#include "../include/my_putchar.h"

int my_print_comb(void)
{
    int n = 0;

    while (n < 1000) {
        my_putchar('0' + (n / 100) % 10);
        my_putchar('0' + (n / 10) % 10);
        my_putchar('0' + n % 10);
        if (n != 999) {
            my_putchar(',');
            my_putchar(' ');
        }
        n++;
    }
    return 0;
}
