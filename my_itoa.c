/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_itoa
*/

#include "include/my_src.h"

char *my_itoa(int number)
{
    char *str = malloc(sizeof(char) * 12);

    for (int i = 0; i < 12; i++)
        str[i] = '\0';
    int_to_str(number, 0, str);
    return my_revstr(str);
}