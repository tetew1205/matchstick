/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** robot_play
*/

#include "matchstick.h"

void third_line_ia(int line, int match)
{
    char *print_1 = "AI removed ";
    char *print_2 = " match(es) from line ";
    my_putstr(print_1);
    my_put_nbr(match);
    my_putstr(print_2);
    my_put_nbr(line);
    my_putchar('\n');
}

int last_pipe_ia(pyra *build, int line, int match)
{
    int i = 0;
    int stock_pipe = 0;
    while (build->tab[line][i] != '\0') {
        if (build->tab[line][i] == '|')
            stock_pipe++;
        i++;
    }
    if (stock_pipe < match)
        return (1);
    if (line == 0 || match == 0)
        return (1);
    return (0);
}

int check_space_ia(pyra *build, int line)
{
    int i = 1;
    while (build->tab[line][i] != '\0') {
        if (build->tab[line][i] == ' ')
            return (1);
        i++;
    }
    return (0);
}

int i_a(pyra *build)
{
    int line = rand() % (build->ar_line + 1);
    int match = rand() % (build->ar_match + 1);
    if (build->idx == 1 && build->pipe != 0) {
        while (last_pipe_ia(build, line, match) != 0 && build->pipe != 0) {
            line = rand() % (build->ar_line + 1);
            match = rand() % (build->ar_match + 1);
        }
        my_putstr("\nAI's turn...\n");
        change_pyra_ia(build, line, match);
        third_line_ia(line, match);
        print_tab(build->ar_line, build->tab);
        if (build->pipe == 0)
            return (1);
    }
    return (0);
}