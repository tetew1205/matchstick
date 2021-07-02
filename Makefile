##
## EPITECH PROJECT, 2020
## makefile_fmake
## File description:
## make_to_make
##

RM		=	rm -f

SRC		=	src/main.c 		\
			src/init_structure.c	\
			src/swap_tab.c	\
			src/create_line.c	\
			src/base_game.c	\
			src/prompt.c	\
			src/change_pyra.c	\
			src/error_gestion.c	\
			src/robot_play.c	\
			src/storage.c

OBJ		=	$(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra -g

CPPFLAGS = -I ./include -I /lib/my

NAME	=	matchstick

LDFLAGS		= -L. -lmy -lncurses

all: $(NAME)

$(NAME): $(OBJ)
	 $(MAKE) -C lib/my
	 $(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) libmy.a
	make -C lib/my fclean

re: fclean all

PHONY: all re clean fclean