/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** swap_storage
*/

#include "matchstick.h"

char *top_end(int count)
{
    int i = 0;
    int max = count + count - 1;
    char *line = malloc(sizeof(char) * (max + 3));
    while (i != (max + 2)) {
        line[i] = '*';
        i++;
    }
    line[i] = '\0';
    return (line);
}

void stock(pyra *build)
{
    build->tab[build->x][build->y - 1] = '*';
    build->tab[build->x++][build->y] = '\0';
    if (build->value_max > 0)
        build->value_max = build->value_max - 1;
    if (build->value_max < 0)
        build->value_max = 0;
}

char **create_tab(int count, pyra *build)
{
    int max = count + count - 1;

    build->value_max = count - 1;
    build->maxi = build->value_max;
    build->tab = malloc(sizeof(char *) * (count + 3));
    build->tab[0] = top_end(count);
    while (build->x <= (count)) {
        build->y = 0;
        build->tab[build->x] = malloc(sizeof(char) * (max + 3));
        while (build->y != (max + 2))
            line_modify(build);
        stock(build);
    }
    build->tab[build->x] = top_end(count);
    build->tab[build->x + 1] = NULL;
    return (build->tab);
}