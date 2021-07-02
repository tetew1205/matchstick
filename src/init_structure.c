/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** init_structure
*/

#include "matchstick.h"

st_one *init_struct(void)
{
    st_one *struct_1;
    struct_1 = malloc(sizeof(st_one));
    struct_1->int_1 = 0;
    struct_1->int_2 = 0;
    struct_1->int_3 = 0;
    return (struct_1);
}

pyra *init_pyra(void)
{
    pyra *build;
    build = malloc(sizeof(pyra));
    build->tab = NULL;
    build->idx = 0;
    build->x = 1;
    build->y = 0;
    build->pipe = 0;
    return (build);
}

recup *init_recup(void)
{
    recup *pro;
    pro = malloc(sizeof(recup));
    pro->get = 0;
    pro->save = 0;
    pro->player_turn = 1;
    return (pro);
}