/*
** EPITECH PROJECT, 2020
** task03
** File description:
** counts and returns the number of characters
*/
#include <stddef.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str != NULL && str[i] != '\0') {
        i = i +1;
    }
    return (i);
}

int my_nb_char(char const *str)
{
    int i;
    i = 0;
    while (str[i] != '\n') {
        i = i +1;
    }
    return (i);
}
