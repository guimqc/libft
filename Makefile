SRCS = 	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_putchar.c ft_putstr.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \

OBJ = $(SRCS:%c=%o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME) clean

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

split:
	$(CC) $(CFLAGS) ft_split.c ft_strlen.c ft_substr.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_bzero.c && ./a.out

itoa:
	$(CC) $(CFLAGS) ft_itoa.c ft_calloc.c ft_bzero.c && ./a.out

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) rm a.out
