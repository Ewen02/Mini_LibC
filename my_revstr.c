/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_revstr
*/

#include "include/my_src.h"

char *my_revstr(char *str)
{
    int size = 0;
    char t = ':';

    for (int i = 0; str[i] != '\0'; i++)
        size++;
    for (int i = 0; i < size; i++){
        t = str[size - 1];
        str[size - 1] = str[i];
        str[i] = t;
        size--;
    }
    return str;
}