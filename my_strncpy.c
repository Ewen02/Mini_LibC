/*
** EPITECH PROJECT, 2021
** Mini_LibC
** File description:
** my_strncpy
*/

#include "include/my_src.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    if (i == n)
        dest[i] = '\0';
    return dest;
}
