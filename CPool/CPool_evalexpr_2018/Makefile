##                                                                                      
## EPITECH PROJECT, 2018                                                                
## D14 - InfinAdd - Makefile                                                                  
## File description:                                                                    
## makefile compiles your libmy                                                         
##

SRC =	eval_expr.c

OBJ = $(SRC:.c)

NAME = eval_expr

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
