# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 13:42:58 by tbaagman          #+#    #+#              #
#    Updated: 2018/08/16 15:28:38 by tbaagman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
HEADER = fdf.h
LIBFTDIR = libft/
SRC = mlx_test.c key_handler.c get_map.c fdf_init.c get_map_fd.c draw.c
OBJ	= mlx_test.o key_handler.o get_map.o fdf_init.o get_map_fd.o draw.o
FLAGS = -Wall -Werror -Wextra
LINKING = -lmlx -framework OpenGL -framework AppKit -L libft -lft

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	@gcc $(FLAGS) -c $(SRC)
	@make -C $(LIBFTDIR) all
	@gcc $(FLAGS) -o $(NAME) $(OBJ) $(LINKING)

clean:
	@/bin/rm -rf $(OBJ)
	@make -C $(LIBFTDIR) clean
	@echo "Cleaning for object files"

fclean: clean
		@/bin/rm -rf $(NAME)
		@make -C$(LIBFTDIR) fclean
		@echo "Cleaning directory"

re: fclean all

.PHONY: all, clean, fclean, re
