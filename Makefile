# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmount <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 14:49:46 by rmount            #+#    #+#              #
#    Updated: 2022/02/11 15:27:59 by rmount           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

#---------------#
#    SOURCES    #
#---------------#

SRC_CHAR = ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		ft_islower.c \
		   ft_isprint.c \
		ft_isspace.c \
		ft_isupper.c

SRC_CONVERSION = ft_atoi.c \
				 ft_itoa.c 

SRC_MEMORY = ft_bzero.c \
			 ft_calloc.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_memset.c 

SRC_PRINT = ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c	

SRC_STR = ft_strchr.c \
	ft_strdlen.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strjoin.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_toupper.c 

SRCS = $(SRC_CHAR) \
	   $(SRC_CONVERSION) \
	   $(SRC_MEMORY) \
	   $(SRC_PRINT) \
	   $(SRC_STR)

OBJS = $(SRCS:.c=.o)

#-------------#
#    BONUS    #
#-------------#

BONUS_SRC_LIST = 

BONUS_SRCS = $(BONUS_SRC_LIST)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

#-------------#
#    RULES    #
#-------------#

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I . -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:
	$(CC) $(CFLAGS) -I . -c $(SRCS) $(BONUS_SRCS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

clean:
	-rm $(OBJS) $(BONUS_OBJS)

fclean: clean
	-rm $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
