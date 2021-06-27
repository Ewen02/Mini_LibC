/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_anti_backn, remplace '\n' to '\0'
*/

#include "include/my_src.h"

char *anti_backn_string(char *str)
{
    int size = strlen(str);

    for (int i = 0; i < size; i++)
        if (str[i] == '\n')
            str[i] = '\0';
    return str;
}