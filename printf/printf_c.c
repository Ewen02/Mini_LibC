/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** printf, %c : print char
*/

#include "../include/my_src.h"

void printf_c(va_list arg)
{
    char c = va_arg(arg, int);

    write (1, &c, 1);
}
