/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** write caractere
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
