#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    if (ft_strlen((char *)needle) > ft_strlen((char *)haystack))
        return (NULL);
    if ((char *)needle == 0)
        return ((char *)haystack);
    i = -1;
    while (++i < len)
        //
    return (NULL);
}

int main()
{
    const char haystack[] = "hello world";
    const char needle[] = "hello world1";
    printf("%s", strnstr(haystack, needle, 11)); // = NULL
}
