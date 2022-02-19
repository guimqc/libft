NAME = libft.a

all: $(NAME)

$(NAME): *.o *.c
	ar rcs $(NAME) *.o && rm *.o

*.o: *.c
	gcc -Wall -Werror -Wextra -c *.c

clean:
	rm -f $(NAME) *.o