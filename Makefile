# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albriffa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 15:45:24 by albriffa          #+#    #+#              #
#    Updated: 2024/01/31 16:33:16 by albriffa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name		= Push_swap
CC			= cc
RM			= rm -f
CFLAGS		+= -Wall -Wextra -Werror

SRC		= push_swap.c\

OBJ		= $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
