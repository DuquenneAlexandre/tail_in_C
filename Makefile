##
## Makefile for  in /home/duquen_p/rendu/tail
## 
## Made by Pierre-Alexandre Duquenne
## Login   <duquen_p@epitech.net>
## 
## Started on  Fri Oct 31 10:27:14 2014 Pierre-Alexandre Duquenne
## Last update Fri Nov 21 10:34:14 2014 Pierre-Alexandre Duquenne
##

SRC =   		src/my_putchar.c	\
			src/my_putstr.c		\
			src/get_next_line.c	\
			src/aff_tenlines.c	\
			src/solo_tail.c		\
			src/nb_ligne.c		\
			src/my_open.c		\
			src/my_opentab.c	\
			src/error_trunc.c	\
			src/my_create_list.c	\
			src/my_showmore.c	\
			src/my_compare.c	\
			src/my_display_list.c	\
			src/my_add_elem.c	\
			src/error_open.c	\
			src/tail_main.c		\
			src/aff_arrow.c		\

RED =                   \033[1;31m

GREEN =                 \033[1;32m

WHITE =                 \033[1;0m

OBJ =                   $(SRC:.c=.o)

NAME =                  tail

CC =                    gcc

CFLAGS =                -W -Wall -g

all:            $(NAME)

$(NAME):        $(OBJ)
		@$(CC)  $(OBJ) -o $(NAME)
		@echo -e "$(GREEN)\n > Compilation terminée."
		@echo -e "$(WHITE)"


clean:
		@echo -e "$(RED)\n > Suppression terminée."
		@rm -rf $(OBJ)
		@echo -e "$(WHITE)\n"

fclean:         clean
		@rm -rf $(NAME)

re:             fclean all
