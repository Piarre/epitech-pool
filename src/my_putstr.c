/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Print chars of a string 1-by-1
*/
#include "../include/lib.h"

int my_putstr(char const *str)
{
    int length = my_strlen(str);

    for (int i = 0; i < length; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
