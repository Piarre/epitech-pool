/*
** EPITECH PROJECT, 2025
** pool_exercise
** File description:
** Swap 2 int variables
*/
void my_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
    return;
}
