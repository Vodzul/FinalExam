
#include <unistd.h>

void	rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'm' && str[i] >= 'a')
			 || (str[i] <= 'M' && str[i] >= 'A'))
			str[i] += 13;
		else if ((str[i] <= 'z' && str[i] >= 'n')
			 || (str[i] <= 'Z' && str[i] >= 'N'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
}