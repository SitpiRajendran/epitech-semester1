##
## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##


SRC =	error.c	\
	./bonus/color.c	\
	gamelaunch.c	\
	help.c	\
	init.c	\
	main.c	\
	mapverify.c	\
	move.c	\
	my_strcol.c	\
	my_strrow.c	\
	sokoban.c	\
	strtoarr.c	\
	win.c

OBJ = $(SRC:.c=.o)

NAME = my_sokoban

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -lncurses
	make clean

clean:
	rm -f $(OBJ)

cleantest:
	rm -f test

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
