##
## EPITECH PROJECT, 2018
## D10 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC 	=	../my_putchar.c	\
		../my_put_nbr.c	\
        ../my_strlowcase.c \
		../rush2.c
OBJ	=	$(SRC:.c=.o)

NAME	=	rush2

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)
	cp ./rush2 ../
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean r
