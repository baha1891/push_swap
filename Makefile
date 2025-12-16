# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 22:20:00 by balsayed          #+#    #+#              #
#    Updated: 2025/12/17 02:18:14 by balsayed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = main.c \
		push_swap.c \
		handel_errors.c \
		init_stack.c \
		push_swap_init.c \
		sort_stackes.c \
		ft_split.c \
		ft_strlcpy.c \
		ft_swap.c \
		ft_push.c \
		ft_rotate.c \
		ft_rev_rotate.c \
		utils1.c \
		utils2.c \
		utils3.c

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
