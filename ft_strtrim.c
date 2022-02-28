#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int minus;
	int s1_len;

	s1_len = ft_strlen((char *)s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = s1_len - 1;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	minus = s1_len - j - 1;
	return (ft_substr(s1, i, s1_len - minus - i));
}
