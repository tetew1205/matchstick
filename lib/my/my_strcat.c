/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{

    int i = 0;
    int count = 0;
    while (dest[i] != '\0') {
        if (dest[i] == ' ')
            count++;
        if (count == 2) {
            dest[i + 1] = src[0];
            dest[i + 2] = '\0';
        }
        i++;
    }
    return (dest);
}