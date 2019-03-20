##
## EPITECH PROJECT, 2018
## Makefile FinalStumper
## File description:
## Rush3
##

SRC	=	main.c	\
		lib/my/my_putstr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_strlen.c

NAME	=	rush3

all:	$(NAME)

$(NAME):
		gcc $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
