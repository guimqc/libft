#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    j = 0;
    while (dst[j])
        j++;
    printf("%zu\n", j);
    i = j - 1;
    while (++i < dstsize - ft_strlen(dst) - 1)
        dst[j++] = src[i];
    dst[i] = '\0';
    return (ft_strlen((char *)src) + j);
}

int main()
{
    char dst[] = "hello";
    char src[] = " world!";
    ft_strlcat(dst, src, ft_strlen(dst));
    printf("%s\n", dst);
}
