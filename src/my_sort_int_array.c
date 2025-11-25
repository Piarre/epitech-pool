#include "../include/lib.h"

/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Sort an array
*/
void my_sort_int_array(int *array, int size)
{
    int i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                my_swap(&array[j], &array[j + 1]);
            }
        }
    }

    return;
}
