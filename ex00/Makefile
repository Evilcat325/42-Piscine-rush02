# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 20:42:58 by seli              #+#    #+#              #
#    Updated: 2018/10/07 20:43:15 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./

SOURCES = ft_main.c

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

clean:

debug:
	@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES) -g;

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
