/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** main
*/

#include "matchstick.h"

void my_h(void)
{
    write(1, "USAGE\n\t./matchstick int line and \
int match(es)\nDESCRIPTION\n\tthe matchstick is a game that is based \
on a pyramid of matches, the goal is to remove a \
number x of '|' is to let the opponent remove the last '|'.\n\t\
The game is played by entering first the number of the chosen line \
and then the number of '|' that your steal take away.\n \
the value max is 99 and the minimun is 1\n", 372);
}

int error_matches(pyra *build)
{
    if (build->ar_match <= 0)
        return (84);
    if (build->ar_line <= 0)
        return (84);
    return (0);
}

int my_game(char **argv)
{
    int save = 0;
    pyra *build = init_pyra();
    recup *pro = init_recup();
    build->ar_line = my_getnbr(argv[1]);
    build->ar_match = my_getnbr(argv[2]);
    if (error_matches(build) == 84) {
        my_h();
        return (84);
    }
    if (build->ar_line < 1 || build->ar_line > 99) {
        my_h();
        return (84);
    }
    save = base_game(build, pro);
    return (save);
}

int main(int argc, char **argv)
{
    int save = 0;

    if (argv[1][0] == '-' && argv[1][1] == 'h')
        my_h();
    if (argc != 3) {
        write(2, "ERROR: not enough arguments.\n", 30);
        return (35);
    }
    save = my_game(argv);
    return (save);
}