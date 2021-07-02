/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** function that copies a string into another.
*/

#include <stddef.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src != NULL && src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strcpy3(char *dest, char const *src)
{

    int i = 0;
    while (src[i] != '\0' && src[i] != '\n' && src[i] != ' ' ) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strcpy2(char *dest, char const *src)
{

    int i = 0;
    while (src[i] != '\0' && src[i] != '\n' && src[i] != ' ' && src[i] != ':') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '/';

    return (dest);
}
