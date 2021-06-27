/*
** EPITECH PROJECT, 2020
** src/
** File description:
** //
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <dirent.h>

#include "my_printf.h"

#pragma once

int my_getnbr(char *str);
char *int_to_str(int nb, int pos, char *str);
char *my_itoa(int number);
void my_putchar(char c);
void my_putstr(char const *str);
char *my_revstr(char *str);
char **my_str_to_tab(char *buffer, char letter);
char *my_strcat(char *str1, char *str2);
int my_strcmp(char *s1 , char *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
int my_strlentab(char **tab);
int my_strncmp(char *s1, char *s2, int n);
char *my_strncpy(char *dest, char *src, int n);
int my_put_nbr(int nb);