int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - 48;
	return (sign * result);
}
