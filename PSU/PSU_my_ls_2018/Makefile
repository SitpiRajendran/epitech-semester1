## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	main.c	\
	simple_ls.c	\
	option.c	\
	ls_a.c	\
	ls_l.c	\
	ls_l_file.c	\
	ls_la.c	\
	ls_d.c	\
	ls_r.c	\
	ls_rcap.c	\
	ls_rcap_l.c	\
	ls_t.c	\
	ls_file.c	\
	my_putstr.c	\
	my_strdup.c

OBJ = $(SRC:.c=.o)

NAME = my_ls

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -g3 -Wall -Wextra
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
