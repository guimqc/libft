#include "../libft.h"

int main()
{
    ft_putchar('\n');
    ft_putstr("THIS PROGRAM TEST ALL THE MANDATORY FUNCTION OF LIBFT\n");
    ft_putchar('\n');

    ft_putstr("this is a putstr test\n");
    ft_putchar('\n');

    ft_putstr("ft_putchar('c') = ");
    ft_putchar('c');
    ft_putchar('\n');
    ft_putchar('\n');

    printf("ft_atoi(\" \\v -234abc456\") = %d\n", ft_atoi(" \v -234abc456"));
    ft_putchar('\n');

    printf("ft_isalnum('3') = %d\n", ft_isalnum('3'));
    printf("ft_isalnum(',') = %d\n", ft_isalnum(','));
    ft_putchar('\n');

    printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
    printf("ft_isalpha(',') = %d\n", ft_isalpha(','));
    ft_putchar('\n');

    printf("ft_isascii('a') = %d\n", ft_isascii('a'));
    printf("ft_isascii(23) = %d\n", ft_isascii(23));
    ft_putchar('\n');

    printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
    printf("ft_isdigit(52) = %d\n", ft_isdigit(52));
    printf("ft_isdigit(12) = %d\n", ft_isdigit(12));
    ft_putchar('\n');

    printf("ft_isprint(52) = %d\n", ft_isprint(52));
    printf("ft_isprint(12) = %d\n", ft_isprint(12));
    printf("ft_isprint(12) = %d\n", ft_isprint('a'));
    printf("ft_isprint(\\t) = %d\n", ft_isprint('\t'));
    ft_putchar('\n');

    
}