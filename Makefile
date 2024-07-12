# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 15:11:39 by snakajim          #+#    #+#              #
#    Updated: 2024/07/12 15:16:18 by snakajim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 = libftprintf.a
CC		 = CC
CFLAGS	 = -Wall -Wextra -Werror
CFILES	 = ft_printf.c 
OBJ		 = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re