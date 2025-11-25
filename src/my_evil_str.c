/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Reverse a string
*/
#include "../include/lib.h"
#include <string.h>
#include <stdlib.h>

char *my_evil_str(char *str)
{
    int len = my_strlen(str);
    char *reversed = malloc((len + 1) * sizeof(char));

    if (!reversed) {
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';
    return reversed;
}
