# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 11:03:22 by adjoly            #+#    #+#              #
#    Updated: 2024/02/13 14:04:13 by adjoly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

SRCS = main.c \
		parsing.c \
		stack/ft_stackadd_back.c \
		stack/ft_stackadd_front.c \
		stack/ft_stackdelone.c \
		stack/ft_stackclear.c \
		stack/ft_stacknew.c \
		stack/ft_stacklast.c \
		stack/ft_stacksize.c \
		operations/ft_swapstack.c \
		operations/ft_pushstack.c \
		operations/ft_rotatestack.c \
		operations/ft_reverserotate.c \

OBJS = $(SRCS:.c=.o)

FLAGS = -Werror -Wall -Wextra -g

HEADERS = so_long.h

LIB = libft/libft.a \

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(FLAGS) $(OBJS) $(LIB) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -I $(HEADERS) $< -c -o $@

all: $(NAME)

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
