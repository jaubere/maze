##
## Makefile for Makefile in /home/jaubere/Bureau/all/dante/parcours_en_profondeur
## 
## Made by jauber_e
## Login   <Jaubert Elise@epitech.net>
## 
## Started on  Mon May  9 10:16:12 2016 jauber_e
## Last update Sun May 22 15:50:15 2016 jauber_e
##

NAME=		generateur

SRC=		generation.c \
		malloc_check.c \
		print_map.c \
		way.c \
		branch.c \
		create_branch.c

OBJ=		$(SRC:.c=.o)

CFLAGS+=	-W -Wall -Wextra -Werror

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
