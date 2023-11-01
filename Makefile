# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 21:03:20 by nel-hark          #+#    #+#              #
#    Updated: 2022/11/02 20:18:26 by nel-hark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc

SRC =	ft_calloc.c\
		ft_memcmp.c\
		ft_strchr.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_toupper.c\
		ft_isalnum.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_itoa.c\
		ft_memset.c\
		ft_strjoin.c\
		ft_strmapi.c\
		ft_substr.c\
		ft_bzero.c\
		ft_isascii.c\
		ft_memchr.c\
		ft_split.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_tolower.c\
		ft_isdigit.c\
		ft_memmove.c\
		ft_striteri.c\
		ft_strmapi.c\
		ft_strtrim.c\
		ft_strlcpy.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\


NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):$(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all