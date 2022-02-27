#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	while (s1[i] == ((char *)set)[0])
		i++;
	j = ft_strlen((char *)s1);
	while (s1[i] == ((char *)set )[0])
		j--;
	return (ft_substr(s1, i, ft_strlen((char *)s1) - j));
}

int main()
{
	
}

// i; would be the start of the substr and j; the len (ft_strlen(s1) - j);
// i++; --j; substr(s1, i, ft_strlen(s1) - j);
// set could be multiple chars tho, so idk about that yet.