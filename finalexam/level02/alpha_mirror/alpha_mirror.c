
#include <unistd.h>

void	alpha_mirror(char *str)
{
	int i;
	int back;

	if (len == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			back = str[i] - 97;
			str[i] = 122 - back;
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			back = 122 - str[i];
			str[i] = 97 + back;
		}
		if (str[i] >= 'A' && str[i] <= 'M')
		{
			back = str[i] - 65;
			str[i] = 90 - back;
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			back = 90 - str[i];
			str[i] = 65 + back;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
}