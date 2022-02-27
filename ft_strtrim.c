#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int minus;
	int s1_len;

	s1_len = ft_strlen((char *)s1);
	i = 0;
	while (s1[i] == set[0])
		i++;
	j = s1_len - 1;
	while (s1[j] == set[0])
		j--;
	minus = s1_len - j - 1;
	return (ft_substr(s1, i, s1_len - minus - i));
}

int main()
{
	char *str = "llsooollll";
	char *set = "l";

	printf("%s\n", ft_strtrim(str, set));
}