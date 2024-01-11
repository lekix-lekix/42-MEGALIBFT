# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kipouliq <kipouliq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 14:33:33 by lekix             #+#    #+#              #
#    Updated: 2024/01/11 17:57:06 by kipouliq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megalibft.a

PATH_GNL = ./get_next_line

PATH_FTPRINTF = ./ft_printf

PATH_LIBFT = ./ft_printf/libft

LIBFT = libft.a

LIBFTPRINTF = libftprintf.a

GNL = get_next_line.a

CC = cc

INCLUDE = -I .

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c  $< -o $@

$(NAME): $(OBJS)	
	make -C $(PATH_FTPRINTF)
	make -C $(PATH_GNL)
	mv ./ft_printf/libft/libft.a ./libft.a
	mv ./ft_printf/libftprintf.a ./libftprintf.a
	mv ./get_next_line/get_next_line.a ./get_next_line.a
	ar -rcT $(NAME) $(LIBFT) $(LIBFTPRINTF) $(GNL) 

clean:
	make -sC $(PATH_FTPRINTF) clean
	make -sC $(PATH_GNL) clean
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean
	make all

.PHONY: all clean fclean re bonus