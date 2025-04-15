/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Print all letter alphabeticly
*/
#include <stdio.h>
#include "../include/my_putchar.h"

int my_print_alpha(void)
{
    char c = 'a';

    while (c <= 'z') {
        my_putchar(c);
        c++;
    }
    return 0;
};
