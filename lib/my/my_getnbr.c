/*
** EPITECH PROJECT, 2021
** B-CPE-200-BDX-2-1-matchstick-theo.abitbol
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int negative = 1;
    int result = 0;
    int i = 0;

    if (str == 0)
        return (0);

    for (i; (*str < 47 || *str > 58) && *str != 0; i++)
        str++;
    if (i > 0 || (*str - 1) == 45)
        negative = -1;

    while (*str != 0 && *str >= 48 && *str <= 57)
    {
        result *= 10;
        result = result + *str - 48;
        str = str + 1;
    }
    result = result * negative;
    return (result);
}