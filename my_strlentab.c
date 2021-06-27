/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_strlen for char **
*/

#include "include/my_src.h"

int my_strlentab(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i]; i++)
        count++;
    return count;
}
