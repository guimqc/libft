SRCS = 	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_putchar.c ft_putstr.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c

NAME = libft.a

CC = gcc

CC_FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): *.o $(SRCS)
	ar rcs $(NAME) *.o

*.o: $(SRCS)
	$(CC) $(CC_FLAGS) -c $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)