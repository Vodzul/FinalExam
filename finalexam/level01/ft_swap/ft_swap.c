
void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main()
{
	int a = 8;
	int b = 5;
	ft_swap(&a, &b);
	printf("%d, %d", a, b);
}