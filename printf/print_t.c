/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** printf, %t : printf char **
*/

#include "../include/my_src.h"

void print_tab(va_list arg)
{
    char **tab = va_arg(arg, char **);

    for (int i = 0; tab[i] != NULL; i++)
        my_printf("%s\n", tab[i]);
}