
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int len;
	int *arr;
	int i;

	if (end >= start)
		len =  end - start + 1;
	else
		len = start - end + 1;
	if (!(arr = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	while (i < len)
	{
		arr[i] = end;
        end += (end > start) ? -1 : 1;
        i++;
	}
	return (arr);
}

#include <stdio.h>

int	main()
{
	int i = 0;
	int *arr;
	arr = ft_rrange(-1, -3);
	while (arr[i] != '\0')
	{
		printf("%d", arr[i]);
		i++;
	}
}