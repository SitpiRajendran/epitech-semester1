##
## EPITECH PROJECT, 2018
## D17 - Bistro - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	bistro.c \
	eval_expr.c	\
	infin_add.c

OBJ = $(SRC:.c)

NAME = calc

LIB = -L./lib/ -lmy

all: $(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my/
	gcc -o $(NAME) $(SRC) $(LIB) -g3
clean:
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
