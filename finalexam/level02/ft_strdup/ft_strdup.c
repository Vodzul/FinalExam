
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc(i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}