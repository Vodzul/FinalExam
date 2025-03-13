
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
void	hiddenp(char *s1, char *s2)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		if (s1[i] == '\0')
		{
			write(1, "1", 1);
			return ;
		}
		j++;
	}
	write(1, "0", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		hiddenp(av[1], av[2]);
	write(1, "\n", 1);
}