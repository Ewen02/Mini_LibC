/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_isnum, regarde dans un char * si c'est bien un chiffre (return 0), si non (return 1)
*/

#include "include/my_src.h"

int isnum(char *str)
{
    if (str == NULL)
        return 1;
    for (int i = 0 ; str[i]; i++) {
        if (str[i] == ' ')
            i++;
        if (str[i] < '0' || str[i] > '9')
            return 1;
    }
    return 0;
}