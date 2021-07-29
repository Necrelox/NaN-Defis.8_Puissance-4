##
## EPITECH PROJECT, 2021
## Puissance4
## File description:
## Makefile
##

NAME	=	Puissance4
CC	=	@g++
SRC	=	$(wildcard src/*.cpp) 					\
		$(wildcard src/core/*.cpp)				\
		$(wildcard src/event/*.cpp)				\
		$(wildcard src/render/*.cpp)			\
		$(wildcard src/scene/puissance4/*.cpp)	\
		$(wildcard src/tools/*.cpp)

INCLUDE	=	-I./include 				\
			-I./include/interface	 	\
			-I./include/class 			\
			-I./include/tools

OBJ	=	${SRC:.cpp=.o}


LIB	= -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system
CFLAGS	=	-Wall -Wextra -pedantic -g3 -O0 -std=c++20


.cpp.o:
	@echo "\e[1;91m[\e[1;92mOK\e[1;91m]\e[0m" "\e[1;91m Compile\e[1;93m" $< "\e[1;91mto\e[1;92m" $@ "\e[0m"
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(OBJ)
	@echo "\e[1;91m[\e[1;92mOK\e[1;91m]\e[0m" "\e[1;91m LINK\e[1;93m" $< "\e[1;91mto\e[1;92m" $(NAME) "\e[0m"
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all




