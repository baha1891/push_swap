# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 22:20:00 by balsayed          #+#    #+#              #
#    Updated: 2025/12/14 14:14:59 by balsayed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

FILES = \
	main.c utils1.c utils2.c ft_split.c ft_strlcpy.c \
	ft_swap.c init_stack.c handel_errors.c operations.c \
	push_swap.c checker.c

# BFILES =

OBJ = $(FILES:.c=.o)
#BOBJ = $(BFILES:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

#bonus: $(BOBJ)
#	ar rcs $(NAME) $(OBJ) $(BOBJ)

clean:
	rm -f $(OBJ)
#	$(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
