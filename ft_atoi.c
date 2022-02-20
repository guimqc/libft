#include <stdio.h>

static int check_space(char *str)
{
	int i;

	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f')
				|| (str[i] == 'r') || (str[i] == ' '))
			i++;
	return (i);
}

static int check_sign(char *str)
{
	int i;
	int sign;
	int sign_met;
	
	sign = 1;
	sign_met = 0;
	i = check_space(str);
	while(str[i] == '+' || str[i] == '-')
	{
		if (sign_met == 1)
			break ;
		if (str[i] == '-')
 			sign *= -1;
		sign_met = 1;
 		i++;
	}
	return (sign * i);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	sign = 1;
	i = check_sign(str);
	if (i < 0)
	{
		i *= -1;
		sign = -1;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}
