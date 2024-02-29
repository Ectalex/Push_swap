# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albriffa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 14:14:12 by albriffa          #+#    #+#              #
#    Updated: 2024/02/01 16:24:43 by albriffa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	push_swap.c\
	ft_algo.c\

all : $(NAME)

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

bonus : $(OBJ) $(OBJ_BONUS)
	ar crs $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.c
	$(CC) -c $< -o $@

clean :
	rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all
