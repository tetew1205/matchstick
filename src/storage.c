/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** storage
*/

#include "matchstick.h"

void storage_base(pyra *build, recup *pro, char **tab)
{
    if (error_match(pro, build->ar_match) == 0) {
        if (stock_modify(build, pro, build->ar_line, tab) == 0) {
            pro->save = i_a(build);
            pro->player_turn = 1;
            build->idx = 0;
        }
    }
}

int ret_end(recup *pro)
{
    if (pro->save == 1) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    my_putstr("You lost, too bad...\n");
    return (2);
}