all: libft.a

libft.a: *.o *.c
	ar rcs libft.a *.o && rm *.o

*.o: *.c
	gcc -Wall -Werror -Wextra -c *.c

clean:
	rm libft.a