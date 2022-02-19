#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		str[i] = c;
	}
	return (str);
}

int main()
{
    char str[5] = "hello";
    printf("%s\n", str);
    memset(str, 122, strlen(str));
    printf("%s\n", str);
}