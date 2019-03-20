## EPITECH PROJECT, 2018
## D11 - T1 - Makefile
## File description:
## makefile compiles your libmy
##

SRC =	cd.c	\
	command.c	\
	env.c	\
	execve.c	\
	main.c	\
	fonctions.c	\
	fonction_next.c	\
	boxwhile.c

@OBJ = $(SRC:.c=.o)

NAME = mysh

all: $(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(SRC) -g3 -Wall -Wextra -I include
	@echo -e "\033[40mCompilation completed sucessfully\033[0m"
	@make clean
	@echo -e "\033[40mCleaning finished !"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
