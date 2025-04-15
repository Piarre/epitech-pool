/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Print numbers with n digits (with leading zeros)
*/
#include "../include/my_put_nbr.h"
#include "../include/my_putchar.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int generer_zeros(int n)
{
    int result = 1;

    for (int i = 0; i < n; i++) {
        result *= 10;
    }
    return result;
}

void show_nbr(int n, int digits)
{
    int zeros;
    int digit;

    for (int i = digits - 1; i >= 0; i--) {
        digit = (n / generer_zeros(i)) % 10;
        my_putchar('0' + digit);
    }
}

int my_print_combn(int n)
{
    int max = generer_zeros(n);
    int digit;

    for (int i = 0; i < max; i++) {
        for (int j = n - 1; j >= 0; j--) {
            digit = (i / generer_zeros(j)) % 10;
            my_putchar('0' + digit);
        }
        if (i != max - 1) {
            my_putchar(',');
            my_putchar(' ');
        }
    }
    return 0;
}
