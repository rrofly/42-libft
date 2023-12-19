# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofde-je </var/mail/rofde-je>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 21:50:38 by rofde-je          #+#    #+#              #
#    Updated: 2023/09/04 19:23:50 by rofde-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CF = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CF) -c *.c
	ar rc $(NAME) *.o

clean:
	rm -f *.o
	rm -f $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
