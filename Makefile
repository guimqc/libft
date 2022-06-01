SRCS = 	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_split.c ft_itoa.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_striteri.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_ltox.c ft_ultox.c \
		ft_ltoa.c ft_printf/ft_printf.c ft_printf/format_and_print.c ft_printf/print_c.c \
		ft_printf/print_nbr.c ft_printf/print_p.c ft_printf/print_percent.c ft_printf/print_s.c \
		ft_printf/print_u.c ft_printf/print_x.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \

BONUSSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstadd_back.c ft_lstmap.c \

BONUSOBJ = $(BONUSSRCS:%c=%o)

OBJ = $(SRCS:%c=%o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ)
	ar rcs $(NAME) $(OBJ) $(BONUSOBJ)

clean:
	rm -f $(OBJ) $(BONUSOBJ) -s

fclean: clean
	rm -f $(NAME) -s

re:	fclean all
