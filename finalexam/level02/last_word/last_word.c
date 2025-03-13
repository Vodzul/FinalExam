
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void	last_word(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i--;
	while (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
	{
		i--;
	}
	i += 1;
	while (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}