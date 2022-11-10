int	ft_strlen(const char *s)
{
	int i;

	i = 0;

	while(str[i])
		i++;
	return (i);
}

int ft_strlen(char *str)
{
	char *tmp;

	tmp = str;
	while (str && *str)
		str++;
	return (tmp - str);
}
