static int check_space(char *str)
{
	int i;

	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
			i++;
	return (i);
}

static int check_sign(char *str)
{
	int i;
	int sign;

	sign = 1;
	i = check_space(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign * i);
}

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	sign = 1;
	i = check_sign((char *)str);
	if (i < 0)
	{
		i *= -1;
		sign = -1;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - 48;
	return (sign * result);
}
