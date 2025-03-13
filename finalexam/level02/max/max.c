
int	max(int *tab, unsigned int len)
{
	int largest;
	unsigned int i;
	unsigned int j;
	int temp;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	largest = tab[i - 1];
	return (largest);
}

#include <stdio.h>

int	main()
{
	int arr[] = {6, 9, 6, 4, 2};
	printf("%d", max(arr, 5));
}