/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** base_game
*/

#include "matchstick.h"

void print_tab(int num, char **tab)
{
    for (int i = 0; i != (num + 2); i++ ) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

void third_line(recup *pro)
{
    char *print_1 = "Player removed ";
    char *print_2 = " match(es) from line ";
    my_putstr(print_1);
    my_putstr_modi(pro->matches);
    my_putstr(print_2);
    my_putstr(pro->lines);
}

int last_pipe(pyra *build, recup *pro)
{
    int i = 0;
    int stock_pipe = 0;
    while (build->tab[pro->line][i] != '\0') {
        if (build->tab[pro->line][i] == '|')
            stock_pipe++;
        i++;
    }
    if (stock_pipe < pro->matche)
        return (1);
    return (0);
}

int stock_modify(pyra *build, recup *pro, int num, char **tab)
{
    if (last_pipe(build, pro) == 1) {
        my_putstr("Error: not enough matches on this line\n");
        return (1);
    }
    change_pyra(build, pro);
    third_line(pro);
    print_tab(num, tab);
    build->idx = 1;
    return (0);
}

int base_game(pyra *build, recup *pro)
{
    build->pipe = build->ar_line * build->ar_line;
    char **tab = create_tab(build->ar_line, build);
    print_tab(build->ar_line, tab);
    while (build->pipe != 0) {
        if (promp_recup(pro) == 0)
            return (0);
        if (error_range_line(pro, build->ar_line) == 0) {
            if (promp_recup2(pro) == 0)
                return (0);
            storage_base(build, pro, tab);
        }
    }
    return (ret_end(pro));
}