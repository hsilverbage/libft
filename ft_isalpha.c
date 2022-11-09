#include <stdio.h>

int ft_isalpha (char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}
int main ()
{
    char c;

    c = 'a';

    printf("%d \n", ft_isalpha(c));

    return (0);
}