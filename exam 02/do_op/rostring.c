#include <unistd.h>
#include <stdlib.h> 

void	rostring(char *str)
{
	int		i;
	int		start_first;
	int		end_first;
	int		flag;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start_first = i;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		i++;
	end_first = i;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i]) 
	{
		flag = 0; 
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				while (str[i] == ' ' || str[i] == '\t')
					i++;
				if (str[i])
					write(1, " ", 1);
			}
			else
			{
				write(1, &str[i], 1);
				i++;
			}
		}
		write(1, " ", 1);
	}
	while (start_first < end_first)
	{
		write(1, &str[start_first], 1);
		start_first++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}