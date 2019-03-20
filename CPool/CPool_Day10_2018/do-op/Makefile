##
## EPITECH PROJECT, 2018
## D10 - T2 - Makefile
## File description:
## MAkefil for Do-op
##

SRC =	do_op.c

NAME =	do-op

OBJ =	$(SRC:.c=.o)

LIB =	-L../lib/ -lmy

all : 	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIB) -g3

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean
