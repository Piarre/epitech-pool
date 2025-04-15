/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Print a char
*/
#include <stdio.h>
#include <unistd.h>

char my_putchar(char c)
{
    return write(1, &c, 1);
}
