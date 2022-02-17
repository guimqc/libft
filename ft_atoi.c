int ft_atoi(char *str)
{
	int i;
	int result;
	int sign_met;
	int sign;

	result = 0;
	sign = 1;
	sign_met = 0;
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f')
			|| (str[i] == 'r') || (str[i] == ' '))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (sign_met == 1)
		break ;
		if (str[i] == '-')
 		sign *= -1;
		sign_met = 1;
 		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}
