##
## Makefile for Makefile in /home/jaubere/Bureau/all/dante/parcours_en_profondeur
## 
## Made by jauber_e
## Login   <Jaubert Elise@epitech.net>
## 
## Started on  Mon May  9 10:16:12 2016 jauber_e
## Last update Sat May 28 17:42:18 2016 jauber_e
##

NAME=		solver

SRC=		main.c \
		init.c \
		move.c \
		free.c \
		print_map.c \
		copy_map.c \
		intersection.c \
		impasse.c \
		check_map.c \
		replace_cara.c

OBJ=		$(SRC:.c=.o)

CFLAGS+=	-W -Wall -Wextra -g

LIB=		-Llib -lmy

all:		liball $(NAME)

liball:
		@make -C ./lib

libclean:
		@make clean -C ./lib

libfclean:
		@make fclean -C ./lib


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LIB)

clean:		libclean
		rm -f $(OBJ)

fclean:		libfclean clean
		rm -f $(NAME)

re:		libfclean fclean all
