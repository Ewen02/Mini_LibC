/*
** EPITECH PROJECT, 2021
** Mini_LibC
** File description:
** my_strncmp
*/

#include "include/my_src.h"

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i + 1 < n)
        i++;
    return (s1[i] - s2[i]);
}
