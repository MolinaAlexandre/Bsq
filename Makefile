##
## EPITECH PROJECT, 2022
## makefile
## File description:
## for myls
##

CFLAGS = -I./include\
		 -I./my_lib/printf/include

SRC	=	src/map.c \
		src/main.c\
		src/utils.c\
		src/utils2.c\
		src/algorithm.c

OBJ = $(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

sub:
	 cd my_lib/my && $(MAKE)
	 cd my_lib/printf && $(MAKE)

$(NAME): sub
	gcc $(SRC) $(CFLAGS) -L./my_lib/my -lmy -L./my_lib/printf -lmy2 -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make -C my_lib/my -f Makefile clean
	make -C my_lib/printf -f Makefile fclean

re: fclean $(NAME)

.PHONY: sub clean fclean re
