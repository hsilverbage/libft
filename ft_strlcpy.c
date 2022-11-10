#include <string.h>
#include <stdio.h>

char	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while(src[i] || i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(n);
}
int	main()
{
	char *src = "falut";
	unsigned int n = 6;
	char dest[n];
	
	printf("%lu \n", ft_strlcpy(dest, src, n));
	printf("%lu \n", strlcpy(dest, src, n));

	return (0);
}
