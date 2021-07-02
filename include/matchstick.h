/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** matchstick
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct st_one_s
{
    char **tab;
    int *int_1;
    int *int_2;
    int *int_3;
}st_one;

typedef struct for_pyra_s
{
    int x;
    int y;
    int value_max;
    int maxi;
    int idx;
    char **tab;
    int pipe;
    int ar_line;
    int ar_match;
}pyra;

typedef struct prompt_s
{
    int player_turn;
    int get;
    int line;
    int matche;
    int save;
    char *lines;
    char *matches;
    size_t size;
    ssize_t getline;
}recup;

st_one *init_struct(void);
pyra *init_pyra(void);
recup *init_recup(void);

void third_line_ia(int line, int match);
void change_pyra_ia(pyra *build, int line, int match);
int i_a(pyra *build);
int check_space_ia(pyra *build, int line);
int last_pipe_ia(pyra *build, int line, int match);

void print_tab(int num, char **tab);
void line_modify(pyra *build);
void change_pyra(pyra *build, recup *pro);
char **create_tab(int count, pyra *build);
char *my_strcpy(char *dest, char const *src);
int base_game(pyra *build, recup *pro);
int last_pipe(pyra *build, recup *pro);
int promp_recup(recup *pro);
int promp_recup2(recup *pro);
int check_space(pyra *build, recup *pro);
int error_range_line(recup *pro, int num);
int error_match(recup *pro, int max);
int stock_modify(pyra *build, recup *pro, int num, char **tab);
void storage_base(pyra *build, recup *pro, char **tab);
int ret_end(recup *pro);

void my_putchar(char c);
char *my_strcat(char *dest, char const *src);
char *my_strcpy2(char *dest, char const *src);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_putstr_modi(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_nb_char(char const *str);
int my_strlen(char const *str);

#endif /* !MATCHSTICK_H_ */