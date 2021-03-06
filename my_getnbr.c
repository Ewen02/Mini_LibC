/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_getnbr
*/

#include "include/my_src.h"

int my_getnbr(char *str)
{
    long result = 0, nbr = 0, sig = 0, j = 0, operator = 1;

    for (j = 0; str[j] != '\0'; j++)
        if (str[j] == '-')
            sig++;
        else if (str[j] <= '9' && str[j] >= '0')
            break;
    for (int i = j; str[i] <= '9' && str[i] >= '0' && str[i] != '\0'; i++)
        nbr++;
    for (int i = 0; i < (nbr - 1); i++)
        operator *= 10;
    for (int i = j; i != (nbr + j); i++) {
        result += ((str[i] - '0') * operator);
        operator = operator / 10;
    }
    if (sig % 2 == 1)
        result *= -1;
    if (result > 2147483647 || result < -2147483648)
        return 0;
    return ((int)result);
}
