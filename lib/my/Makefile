##
## EPITECH PROJECT, 2020
## makefile_lib
## File description:
## makefile
##

SRC     =   	my_strcpy.c 	\
				my_putchar.c 	\
				my_put_nbr.c \
				my_putstr.c	\
				my_strlen.c	\
				my_strcat.c	\
				my_strcmp.c	\
				my_getnbr.c

TET     =       my.h

INCLUDE =       include

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all :   $(NAME)

$(NAME) :       $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../
	rm -f $(OBJ)

clean :
	 rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :    fclean all