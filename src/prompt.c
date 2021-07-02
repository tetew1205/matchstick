/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** prompt
*/

#include "matchstick.h"

int promp_recup(recup *pro)
{
    if (pro->player_turn == 1)
        my_putstr("\nYour turn :\n");
    pro->player_turn = 0;
    my_putstr("Line: ");
    pro->get = getline(&pro->lines, &pro->size, stdin);
    pro->line = my_getnbr(pro->lines);
    if (pro->get == -1 )
        return (0);
    return (1);
}

int promp_recup2(recup *pro)
{
    my_putstr("Matches: ");
    pro->get = getline(&pro->matches, &pro->size, stdin);
    pro->matche = my_getnbr(pro->matches);
    if (pro->get == -1 )
        return (0);
    return (1);
}