##
## Makefile for makefile in /home/guidezs/rendu/lib
## 
## Made by guidez_s
## Login   <Guidez Sebastien@epitech.net>
## 
## Started on  Wed Nov  4 20:27:31 2015 guidez_s
## Last update Sat May 28 15:05:47 2016 jauber_e
##

all	:
			@make -C ./profondeur
			@make -C ./tournoi
			@make -C ./generateur

clean	:
			@make clean -C ./profondeur
			@make clean -C ./tournoi
			@make clean -C ./generateur

fclean	:
			@make fclean -C ./profondeur
			@make fclean -C ./tournoi
			@make fclean -C ./generateur

re	:
			@make re -C  ./profondeur
			@make re -C  ./tournoi
			@make re -C ./generateur
