##
## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	addition.c 	\
	divide.c	\
	multiplication.c\
	my_getnbr.c	\
	my_getnbri.c	\
	my_putchar.c	\
	my_put_nbr.c    \
    my_strlen.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) *.o
	cp $(NAME) ../
	mkdir ../../include
	cp "my.h" ../../include
clean:
	rm -f $(OBJ)
	rm -r ../../include

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all

.PHONY: all clean fclean
