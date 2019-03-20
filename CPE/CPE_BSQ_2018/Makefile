## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	bsq_int.c	\
	my_getnbr.c	\
	my_putchar.c	\
	my_put_nbr.c	\
	my_strismap.c	\
	min.c	\
	orstr.c	\
	my_stcol.c	\
	load_str_in_mem.c

OBJ = $(SRC:.c=.o)

NAME = bsq

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
