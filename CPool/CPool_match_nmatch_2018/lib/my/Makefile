##
## EPITECH PROJECT, 2018
## D10 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC = 	my_putchar.c

OBJ = $(SRC:.c = .o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean: rm -f s $(OBJ))

fclean: clean
		rm -f $(NAME)

re:		fclean all
