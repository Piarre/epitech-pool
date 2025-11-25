/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Get a number from a string
*/
#include "../include/lib.h"
#include "stdbool.h"
#include "limits.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    bool hasFoundDigits = false;
    long res = 0;

    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -1;
        }

        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        hasFoundDigits = true;

        res = (res * 10) + (str[i] - '0');

        if ((sign == 1 && res > INT_MAX) ||
            (sign == -1 && res < INT_MIN))
        {
            return 0;
        }
        i++;
    }


    if (!hasFoundDigits)
    {
        return 0;
    }
    return (res * sign);
}