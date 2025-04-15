/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Check if N is negative
*/
#include "../include/my_putchar.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return n;
};
