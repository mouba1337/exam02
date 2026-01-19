

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;
	int	value;

	i = 0;
	result = 0;
	sign = 1;
	
	// 1. Check for negative sign (only at the very start)
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	// 2. Loop through the string
	while (str[i])
	{
		// 3. Convert character to integer value
		value = -1; // Default to "invalid"
		if (str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			value = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			value = str[i] - 'A' + 10;

		// 4. Validation:
		// If the char was invalid (value is still -1) 
		// OR the value is too big for this base (e.g. 'F' in base 10)
		if (value == -1 || value >= str_base)
			break; // Stop reading

		// 5. Math Formula
		result = result * str_base + value;
		i++;
	}
	return (result * sign);
}


#include <stdio.h>

// Paste your ft_atoi_base function here above main

int main(void)
{
    // Test 1: Standard Base 10
    printf("Input: '123', Base 10 -> Result: %d\n", ft_atoi_base("GG", 10));
    
}