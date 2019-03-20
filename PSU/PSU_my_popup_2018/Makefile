## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	my_popup.c	\
		my_strlen.c

OBJ = $(SRC:.c=.o)

NAME = my_popup

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -lncurses

clean:
	rm -f $(OBJ)

cleantest:
	rm -f test

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
