/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** create_line
*/

#include "matchstick.h"

void line_modify(pyra *build)
{
    int tet = my_strlen(build->tab[0]) - 1;
    if (build->y == 0) {
        build->tab[build->x][build->y] = '*';
        build->y++;
    }
    if (build->y < build->value_max + 1 || build->y >
    (tet - build->value_max - 1)) {
        build->tab[build->x][build->y] = ' ';
        build->y++;
    } else {
        build->tab[build->x][build->y] = '|';
        build->y++;
    }
}