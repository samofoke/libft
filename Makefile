# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samofoke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 08:53:41 by samofoke          #+#    #+#              #
#    Updated: 2019/05/29 10:45:22 by samofoke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re:		fclean all
