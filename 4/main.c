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
    int arr[4] = {18, 5, 7, 29};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    my_sort_int_array(&arr[0], arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d - ", arr[i]);
    }

    return 0;
};
