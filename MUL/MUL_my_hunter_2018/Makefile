## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	test6.c	\
	analyse_events.c\
	setsprite.c	\
	draw.c	\
	timer.c	\
	init.c	\
	gameover.c	\
	my_itoa.c	\
	my_revstr.c	\
	my_putstr.c	\
	help.c	\
	my_strlen.c

OBJ = $(SRC:.c=.o)

NAME = my_hunter

FLAG = -lcsfml-window -lcsfml-system -lcsfml-audio -lcsfml-graphics

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -g3 $(FLAG)
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
