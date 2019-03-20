##                                                                                      
## EPITECH PROJECT, 2018                                                                
## D12 - T1 - Makefile                                                                  
## File description:                                                                    
## makefile compiles your libmy                                                         
##

SRC =	cat.c

OBJ = $(SRC:.c)

NAME = cat

LIB = -L../lib/ -lmy

all: $(NAME)

$(NAME):	$(OBJ)
	make -C ../lib/my/
	gcc -o $(NAME) $(SRC) $(LIB)
clean:
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ../lib/my
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean


