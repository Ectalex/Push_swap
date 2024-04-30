# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albriffa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 14:14:12 by albriffa          #+#    #+#              #
#    Updated: 2024/04/30 09:17:21 by albriffa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	push_swap.c\
	ft_prog.c\
	ft_algo.c\
	ft_algo2.c\
	ft_atoi.c\
	ft_strcmp.c

all : $(NAME)

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
