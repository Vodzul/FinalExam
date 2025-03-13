
#include <unistd.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result);
}

int add_prime_sub(char *num)
{
    int number = ft_atoi(num);
	int result;

	result = 0;
	if (number < 2)
		return (0);
	while (number >= 2)
	{
		result += ft_is_prime(number);
		number--;
	}
	return (result);
}

void ft_putnbr(int x)
{
	char c;
	if (x > 9)
		ft_putnbr(x / 10);
	c = (x % 10) + 48;
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int result;
    if (ac == 2)
	{
        result = add_prime_sub(av[1]);
		ft_putnbr(result);
	}
    write(1, "\n", 1);
}