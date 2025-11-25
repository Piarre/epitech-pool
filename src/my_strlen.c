/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Count str lenght
*/
#include "../include/lib.h"
#include <string.h>

int my_strlen(char const *str)
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}
