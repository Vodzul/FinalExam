
#include <unistd.h>

void	search_and_replace(char *string, char *find, char *replace)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == find[0])
			string[i] = replace[0];
		write(1, &string[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (av[2][1] != '\0' && av[2][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 4)
		search_and_replace(av[1], av[2], av[3]);
	write(1, "\n", 1);
}