#include <string.h>
#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	int i;

	i = 0;

	while(str[i])
	{
		if(str[i] == c)
			return (&str[i]);
		else
			i++;
	}
	if(str[i] == '\0')
		return (&str[i]);
	return (NULL);
}
int	main()
{
	char *str = "falutation";
	int c = '\0';

	printf("%s \n", strrchr(str, c));
	printf("%s \n", ft_strchr(str, c));
	return(0);
}
