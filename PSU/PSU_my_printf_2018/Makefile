## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	bsbi.c	\
	bsoct.c	\
	bshex1.c	\
	bshex2.c	\
	my_printf.c	\
	my_strlen.c	\
	my_put_nbr.c	\
	my_put_nbrld.c	\
	my_putstr.c	\
	my_putstrs.c	\
	my_putchar.c	\
	pointeur.c	\
	my_revstr.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) *.o

test:		$(OBJ)
	gcc -o launchtest $(SRC) ./tests/test_calc.c -lcriterion

clean:
	rm -f $(OBJ)

cleantest:
	rm -f test

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
