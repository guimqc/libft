#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *converted_src;
    char *converted_dst;
    size_t i;

    converted_dst = (char *)dst;
    converted_src = (char *)src;
    i = 0;
    while (i < n)
    {
        converted_dst[i] = converted_src[i];
        i++;
    }
    return (dst);
}
