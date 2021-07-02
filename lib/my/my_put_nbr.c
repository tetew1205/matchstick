/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** put  number
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int start;
    int end;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    } else {
        start = nb / 10;
        end = nb % 10;
        if (start != 0) {
            my_put_nbr(start);
        }
        my_putchar(end + '0');
    }
    return (0);
}
