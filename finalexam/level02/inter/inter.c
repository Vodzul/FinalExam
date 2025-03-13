
#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int i;
	int j;
	int ascii[256] = {0};

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		if (ascii[(int)s2[i]] == 0)
			ascii[(int)s2[i]] = 1;
		i++;
	}
	while (s1[j] != '\0')
	{
		if (ascii[(int)s1[j]] == 1)
		{
			ascii[(int)s1[j]] = 2;
			write(1, &s1[j], 1);
		}
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}