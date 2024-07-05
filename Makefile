# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 16:55:03 by aiblanco          #+#    #+#              #
#    Updated: 2022/12/28 16:55:27 by aiblanco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
DirLib = ./libft
LIBFT.A = ./libft/libft.a
functions = ft_printf.o ft_printchar.o ft_printhex.o ft_printnum.o \
ft_printptr.o ft_printstr.o ft_printunnum.o ninehex.o
ft_printf.h = ft_printf.h

all: $(NAME)

$(NAME): $(LIBFT.A) $(ft_printf.h) $(functions)
	cp $(LIBFT.A) .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(functions)

$(LIBFT.A): 
	make -C $(DirLib) all

%.o: %.c
	gcc $(CFLAGS) -c $?

clean:
	rm -f $(functions)
	make clean -C $(DirLib)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT.A)

re: fclean all

.PHONY: all bonus clean fclean re
