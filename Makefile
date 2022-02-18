# -*- MakeFile -*-

*.o: *.c
	gcc -Wall -Werror -Wextra -c *.c


libft.a: *.o
	ar rcs libft.a *.o

clean:
	rm *.o