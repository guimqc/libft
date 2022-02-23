#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    int dstsize;

    dstsize = ft_strlen((char *)s) + 1;
    i = -1;
    while (++i < dstsize)
        if ((char)s[i] == (char)c)
            return (s[i]);
    return (NULL);
}

int main()
{
    const char s[] = "hello";
    printf("%s", ft_strchr(s, 'o'));
}