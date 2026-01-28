

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;
	int	value;

	i = 0;
	result = 0;
	sign = 1;
	
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		value = -1; 
		if (str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			value = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			value = str[i] - 'A' + 10;
		if (value == -1 || value >= str_base)
			break; 
		result = result * str_base + value;
		i++;
	}
	return (result * sign);
}


#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi_base("0110110fd5", 2));
}