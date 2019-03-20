## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	error.c	\
	function.c	\
	get_next_line.c	\
	launchgame.c	\
	main.c	\
	map_manip.c

OBJ = $(SRC:.c=.o)

NAME = matchstick

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -g3 -Wall -Wextra
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
