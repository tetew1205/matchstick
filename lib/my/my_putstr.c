/*
** EPITECH PROJECT, 2020
** task02
** File description:
** display list of
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = my_strlen(str);
    write(1, str, i);
    return (0);
}

int my_putstr_modi(char const *str)
{
    int i = my_strlen(str) - 1;
    write(1, str, i);
    return (0);
}