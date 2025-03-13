
#include <stdio.h>
#include <stdlib.h>

void pgcd(char *s1, char *s2)
{
    int sayi1 = atoi(s1);
    int sayi2 = atoi(s2);
    int i;

    if (sayi1 < sayi2)
        i = sayi1;
    else if (sayi2 <= sayi1)
        i = sayi2;
    while (i >= 0)
    {
        if (sayi1 % i == 0 && sayi2 % i == 0)
        {
            printf("%d", i);
            return ;
        }
        i--;
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
        pgcd(av[1], av[2]);
    printf("\n");
}