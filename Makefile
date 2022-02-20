SRCS = 	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_putchar.c ft_putstr.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c \
			ft_memset.c ft_bzero.c ft_memcpy.c \

OBJ = $(SRCS:%c=%o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME) clean

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
