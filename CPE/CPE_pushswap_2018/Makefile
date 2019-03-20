## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	main.c	\
	manip_a.c	\
	manip_b.c	\
	manip.c	\
	my_getnbr.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -g3
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
