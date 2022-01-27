NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

#---------------#
#    SOURCES    #
#---------------#

SRC_CHAR = ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c

SRC_CONVERSION = 

SRC_MEMORY = 

SRC_PRINT = 

SRC_STR = ft_strlen.c

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
