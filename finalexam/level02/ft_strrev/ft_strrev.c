
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int len;
    char temp;
    int i = 0;

    len = ft_strlen(str) - 1;
    while (len >= i)
    {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        i++;
        len--;
    }
    return (str);
}

#include <stdio.h>

int	main()
{
	char str[] = "fatihsinancelika";
	printf("%s", ft_strrev(str));
}