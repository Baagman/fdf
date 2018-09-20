# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/29 08:50:46 by tbaagman          #+#    #+#              #
#    Updated: 2018/08/15 15:30:53 by tbaagman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This is the name of the static library
NAME = libft.a

SRC = ft_putchar.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
	ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_isalnum.c ft_memccpy.c\
	ft_putendl.c ft_putnbr.c ft_putstr.c ft_strcat.c ft_strchr.c ft_strcmp.c\
	ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_strncpy.c ft_memalloc.c\
	ft_tolower.c ft_toupper.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c\
	ft_atoi.c ft_memcmp.c ft_strncat.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	ft_putnbr_fd.c ft_strstr.c ft_striter.c ft_striteri.c ft_strequ.c ft_strnequ.c\
	ft_strjoin.c ft_strtrim.c ft_isspace.c ft_strsub.c ft_strlcat.c ft_strmap.c\
	ft_strmapi.c ft_strrchr.c ft_strnstr.c ft_strsplit.c ft_itoa.c ft_islower.c\
	ft_isupper.c ft_isblank.c ft_strndup.c ft_isgraph.c get_next_line.c ft_atoi_base.c

# Variable for the gcc compiler
CC = gcc

# The gcc flags that we'll be used to create the object files
FLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC)
	@ar -rc $(NAME) *.o
	@echo "Library created."

clean:
	@/bin/rm -f *.o
	@echo "Cleaning for object files."

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Archive file removed."

re: fclean all
