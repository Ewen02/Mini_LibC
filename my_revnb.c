/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_revnb, inverse un nombre dans un char * (reverse_nb) ou dans un int (revnb)
*/

#include "include/my_src.h"

int reverse_nb(char *nb)
{
    int number = 0;

    nb = my_revstr(nb);
    number = atoi(nb);
    return number;
}

int revnb(int nb)
{
    char *number = my_itoa(nb);

    number = my_revstr(number);
    nb = atoi(number);
    return nb;
}