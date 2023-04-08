##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC     =       ./src/flag_o.c          \
                ./src/flag_i.c          \
                ./src/flag_c.c          \
		./src/flag_d.c		\
		./src/flag_percent.c	\
		./src/flag_b.c		\
		./src/flag_s.c		\
		./src/flag_smajs.c	\
		./src/flag_tester.c	\
		./src/flag_x_majs.c	\
		./src/flag_x.c		\
		./src/my_putstr.c	\
		./src/my_putchar.c	\
		./src/my_put_nbr.c	\
		./src/my_strlen.c	\
		./src/flag_u.c		\
		./src/flag_f.c		\
		./src/flag_e.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy2.a

CODINGSTYLE	=	coding-style-reports.log

all: $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../libmy2.a

re:     fclean all

comp:		$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -L./ -lmy

prepush: fclean
	rm -f ./a.out
	rm -f $(CODINGSTYLE)
	rm -f lib/$(NAME)

.PHONY: all fclean clean re comp prepush
