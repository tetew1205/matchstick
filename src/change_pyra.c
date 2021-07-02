/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** change_pyra
*/

#include "matchstick.h"

int check_space(pyra *build, recup *pro)
{
    int i = 1;
    while (build->tab[pro->line][i] != '\0') {
        if (build->tab[pro->line][i] == ' ')
            return (1);
        i++;
    }
    return (0);
}

void change_pyra(pyra *build, recup *pro)
{
    int i = 1;
    int save_pos = 0;
    build->pipe = build->pipe - pro->matche;
    while (build->tab[pro->line][i] != '|')
        i++;
    if (check_space(build, pro) == 1) {
        while (build->tab[pro->line][i + 1] != ' ')
            i++;
    } else {
        while (build->tab[pro->line][i + 1] != '*')
            i++;
    }
    save_pos = i;
    i = i - (pro->matche) + 1;
    while (i <= save_pos) {
        build->tab[pro->line][i] = ' ';
        i++;
    }
}

void change_pyra_ia(pyra *build, int line, int match)
{
    int i = 1;
    int save_pos = 0;
    build->pipe = build->pipe - match;
    while (build->tab[line][i] != '|')
        i++;
    if (check_space_ia(build, line) == 1) {
        while (build->tab[line][i + 1] != ' ')
            i++;
    } else {
        while (build->tab[line][i + 1] != '*')
            i++;
    }
    save_pos = i;
    i = i - (match) + 1;
    while (i <= save_pos) {
        build->tab[line][i] = ' ';
        i++;
    }
}