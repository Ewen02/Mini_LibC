/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_strlen
*/

#include "include/my_src.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i = i + 1;
    return i;
}