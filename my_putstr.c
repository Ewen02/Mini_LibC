/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_putchar
*/

#include "include/my_src.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i = i + 1;
    }
}