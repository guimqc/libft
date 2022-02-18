# -*- MakeFile -*-
libft.a: *.o *.c
	ar rcs libft.a *.o
	
*.o: *.c
	gcc -Wall -Werror -Wextra -c *.c

clean:
	rm *.o