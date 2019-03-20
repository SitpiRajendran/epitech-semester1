## EPITECH PROJECT, 2018
## MUL My Hunter
## File description:
## Make your file great again
##

SRC =	draw.c \
		ennemy.c	\
		event.c	\
		init.c	\
		init_next.c	\
		launchgame.c	\
		gameover.c	\
		main.c	\
		mapreading.c	\
		my_itoa.c	\
		my_revstr.c	\
		my_strlen.c \
		obstacle.c	\
		timer.c

OBJ = $(SRC:.c=.o)

NAME = my_runner

FLAG = -lcsfml-window -lcsfml-system -lcsfml-audio -lcsfml-graphics -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -g3 $(FLAG)
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
