# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 11:03:22 by adjoly            #+#    #+#              #
#    Updated: 2024/03/13 13:21:22 by adjoly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

OBJSDIR = obj/

SRCDIR = src/

SRCS = main.c \
		print_stack.c \
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
		algo/get_min_max.c \
		algo/algo.c \
		algo/insertion.c \
		algo/median.c \
		algo/small_mouv.c \
		utils/is_sorted.c \
		utils/print_error.c \

OBJS = $(addprefix $(OBJSDIR), $(SRCS:.c=.o))

FLAGS = -Werror -Wall -Wextra -g

HEADERS = so_long.h

LIB = libft/libft.a \

$(NAME): $(OBJS)
	@make -s -C libft
	@$(CC) $(FLAGS) $(OBJS) $(LIB) -o $(NAME)
	@echo "[✔] Compiled"

$(OBJSDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) -I $(HEADERS) $< -c -o $@
	@echo "[✔] $< compiled"

all: $(NAME)

clean:
	@make -s -C libft clean
	@rm -f $(OBJS)

fclean: clean
	@make -s -C libft fclean
	@rm -f $(NAME)
	@echo "[X] Cleaned"

re: fclean all

.PHONY: clean all re fclean
