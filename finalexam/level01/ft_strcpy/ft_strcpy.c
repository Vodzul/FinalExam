
char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s2)
	{
		*s1 = *s2;
		i++;
		s2++;
		s1++;
	}
	*s1 = '\0';
	return (s1);
}

#include <stdio.h>

int	main()
{
	char *src = "ece";
	char dest[] = "sinan";
	printf("%s", ft_strcpy(dest, src));
}