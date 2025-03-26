##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##

SRC	=	$(shell ls *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	organized

CFLAGS	=	-W -Wall -Wextra -Werror -g3

LDFLAGS	=	-L./libshell -lshell

$(NAME):	$(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)  $(LDFLAGS)
	rm $(OBJ)

all:	$(NAME)


clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
