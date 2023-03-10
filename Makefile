## Makefile
## File description:
## Makefile
##

SRC =	sudo.c	\

CPPFLAGS	=	-I./include/

CFLAGS		=	-Wall -Wextra -Wshadow -g -Wconversion

OBJ =    $(SRC:.c=.o)

NAME  =   sudoka

all:    $(NAME)

.PHONY:	re fclean clean all

$(NAME): 	$(OBJ)
	gcc -o $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#
	rm -f *.gcda
	rm -f *.gno
	rm -f *.c.gcov

fclean: 
	rm -f $(NAME) $(OBJ)
	rm -f *~
	rm -f *#
	rm -f *.gcda
	rm -f *.gno
	rm -f *.c.gcov

re:     fclean all $(NAME)
