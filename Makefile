# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afaraji <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/16 02:00:08 by afaraji           #+#    #+#              #
#    Updated: 2019/01/17 05:44:43 by afaraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = libft.a

SRC = *.c

LIBSRC = libft/*.c

INCLDS = *.h

LIBINCLDS = libft/*.h

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIB)
		gcc $(FLAG) $(SRC) $(LIB) -o $(NAME)

$(LIB):
		gcc $(FLAG) -c $(LIBSRC) -I $(LIBINCLDS)
		ar rc $(LIB) ft_*.o

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)
		/bin/rm -f $(LIB)

re: fclean all
