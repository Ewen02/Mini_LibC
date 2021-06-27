/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_putchar
*/

#include "include/my_src.h"

void my_putchar(char c)
{
    write(1 , &c , 1);
}