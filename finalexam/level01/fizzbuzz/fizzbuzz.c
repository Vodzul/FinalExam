
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long x;

	x = nb;
	if (x < 0)
	{
		write(1, "-", 1);
		x = -x;
	}
	if (x >= 10)
		ft_putnbr(x / 10);
	ft_putchar((x % 10) + 48);
}

int	main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 5 == 0)
			write(1, "fizz\n", 5);
		else if (i % 3 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1); 
		}
		i++;
	}
}