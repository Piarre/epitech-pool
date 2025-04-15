/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Print all digits
*/
#include <stdio.h>
#include "../include/my_putchar.h"
#include "../include/my_print_digits.h"

int my_print_digits(void)
{
    char i = '0';

    while (i <= '9') {
        my_putchar(i);
        i++;
    }
    return 0;
};
