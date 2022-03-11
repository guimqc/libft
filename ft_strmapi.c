char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	size_t i;

	str = ft_calloc(ft_strlen((char *)s), sizeof(char));
	i = 0;
	while (i < ft_strlen((char *)s))
		str[i] = // apply func on s[i]
	return (str);
}

int main()
{
	char *s = "bcde";
}