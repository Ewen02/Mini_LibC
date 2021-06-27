/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_int_to_char
*/

#include "include/my_src.h"

char *int_to_str(int nb, int pos, char *str)
{
    int result = 0;

    if (nb >= 0 && nb <= 9)
        str[pos] = ('0' + nb);
    if (nb > 9 || nb * -1 > 9){
        result = nb % 10;
        int_to_str(nb / 10, pos + 1, str);
        str[pos] = ('0' + result);
    }
    return str;
}