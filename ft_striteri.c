#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    i = -1;
    while (++i < ft_strlen(s))
        f(i, &s[i]);
}
