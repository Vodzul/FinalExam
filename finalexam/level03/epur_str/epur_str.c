
#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int	print_space;

	i = 0;
	print_space = 0;

	// Baştaki boşlukları atla
	while (str[i] == ' ' || str[i] == '\t')
		i++;

	while (str[i])
	{
		// Eğer kelime içindeysek
		if (str[i] != ' ' && str[i] != '\t')
		{
			// Eğer önce boşluk gördüysek, bir tane boşluk ekleyelim
			if (print_space)
				write(1, " ", 1);
			// Kelimenin tamamını yazdıralım
			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				write(1, &str[i], 1);
				i++;
			}
			print_space = 1;
		}
		else
			i++; // Boşlukları atla
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
}