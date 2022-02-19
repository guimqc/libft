NAME = libft.a
CC = gcc
CC_FLAGS = -Wall -Werror -Wextra
OBJ_DIR = obj/

all: $(NAME)

$(NAME): *.o *.c
	ar rcs $(NAME) *.o

*.o: *.c
	$(CC) $(CC_FLAGS) -c *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)