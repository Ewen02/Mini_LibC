/*
** EPITECH PROJECT, 2021
** Mini_LibC
** File description:
** my_strdup
*/

#include "include/my_src.h"

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    dest = my_strcpy(dest, src);
    return (dest);
}