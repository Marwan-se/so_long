# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 14:34:21 by msekhsou          #+#    #+#              #
#    Updated: 2023/01/15 02:57:39 by msekhsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
CFLAGS = -Wall -Werror -Wextra
MLXF = -lmlx -framework OpenGL -framework AppKit
INC = so_long.h
PRINTF = ft_printf/libftprintf.a
SRC = so_long.c so_long_utils.c so_long_utils1.c so_long_utils2.c\
		movements.c parsing.c print_map.c making_window.c parsing2.c

OBJ = $(SRC:.c=.o)
OFILES := $(CFILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(INC) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC) $(PRINTF) $(MLXF) -o $(NAME)

$(PRINTF):
	make -C ft_printf

clean :
	@rm -rf $(OBJ)
	make -C ft_printf clean
fclean : clean
	@rm -rf $(NAME)
	make -C ft_printf fclean

re : fclean all

.PHONY: all fclean clean re 
