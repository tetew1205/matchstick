/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** error_gestion
*/

#include "matchstick.h"

int error_range_line(recup *pro, int num)
{
    int i = 0;
    while (pro->lines[i] != '\n') {
            if (pro->lines[i] < 48 || pro->lines[i] > 57) {
                my_putstr("Error: invalid input (positive number expected)\n");
                return (1);
            }
        i++;
    }
    if (pro->line == 0) {
        my_putstr("Error: this line is out of range\n");
        return (1);
    }
    if (pro->line > num) {
        my_putstr("Error: this line is out of range\n");
        return (1);
    }
    return (0);
}

int error_match(recup *pro, int max)
{
    int i = 0;
    while (pro->matches[i] != '\n') {
            if (pro->matches[i] < 48 || pro->matches[i] > 57) {
                my_putstr("Error: invalid input (positive number expected)\n");
                return (1);
            }
        i++;
    }
    if (pro->matche == 0) {
        my_putstr("Error: you remove at least one match\n");
        return (1);
    }
    if (pro->matche > max) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(max);
        my_putstr(" matches per turn\n");
        return (1);
    }
    return (0);
}