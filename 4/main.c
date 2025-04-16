/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Main function entry point
*/
#include "../include/lib.h"
#include <stdio.h>

int main(void)
{
    char arr[][3] = {"110000000000000000000042", "-100000000000000000000042", "42a43"};

    for (int i = 0; i < 3; i++)
    {
    }

    int rev1 = my_getnbr("110000000000000000000042");
    int rev2 = my_getnbr("-100000000000000000000042");
    int rev3 = my_getnbr("42[i]43");

    printf("%d\n", rev1);
    printf("%d\n", rev2);
    printf("%d\n", rev3);

    return 0;
};
