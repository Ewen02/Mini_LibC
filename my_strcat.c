/*
** EPITECH PROJECT, 2020
** Mini_LibC
** File description:
** my_strcat
*/

#include "include/my_src.h"

char *my_strcat(char *str1, char *str2)
{
    int i = 0;
    int size = my_strlen(str1) + (my_strlen(str2));
    char *result;

    result = malloc(sizeof(char) * (my_strlen(str1) + (my_strlen(str2))) + 10);
    for (int j = 0 ; i < size && str1[j] != '\0'; i++, j++)
        result[i] = str1[j];
    for (int j = 0; i < size && str2[j] != '\0'; i++, j++) {
        result[i] = str2[j];
        result[i + 1] = '\0';
    }
    return result;
}