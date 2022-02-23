#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    int dstsize;

    dstsize = ft_strlen((char *)s) + 1;
    i = -1;
    while (++i < dstsize)
        if ((*s++ == (char)c))
            return ((char *)--s);
    return (NULL);
}

